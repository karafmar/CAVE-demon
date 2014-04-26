/* 
 * File:   core.cpp
 * Author: marketa
 * 
 * Created on 22. duben 2014, 14:20
 */

#include "core.h"
using namespace std;

core::core() {
    ins = std::map<std::string, std::shared_ptr < module >> ();
    outs = std::map<std::string, std::shared_ptr < module >> ();
    eventIn = std::queue<std::shared_ptr < eventMessage >> ();
    eventOut = std::queue<std::shared_ptr < eventMessage >> ();

    loadConfig();
}

core::~core() {
}

/**
 * Loads all i/o models
 */
void core::loadConfig() {
    cout << "Starting load...\n";
    TiXmlDocument doc("mainconfig.xml");
    bool load = doc.LoadFile();
    if (!load) {
        cout << "Couldn't load mainconfig!\n";
        state.endProgram = true;
    } else {
        cout << "Mainconfig load successful..\n";
        //doc.Print();
        TiXmlElement * root = doc.RootElement();
        TiXmlElement *io = root->FirstChildElement(); //outs
        TiXmlElement * el = io->FirstChildElement(); //module      
        while (el != NULL) {
            buildOut(el);
            el = el->NextSiblingElement();
        }
        io = io->NextSiblingElement(); //ins
        el = io->FirstChildElement(); //module

        while (el != NULL) {
            buildIn(el);
            el = el->NextSiblingElement();
        }
    }
    cout << "... Loading finished\n";
}

/**
 *disconnect all modules and sets state.theEnd false
 */
void core::end() {
    cout << "Ending program...\n";
    bool conf = false;
    for (auto& in : ins) {
        conf = in.second->bye();
        cout << in.second->getID();
        if (conf == true) cout << "--disconnecting failed\n";
        else cout << "--disconnecting successful\n";
        //in.second->coreptr.reset();
        ins.erase(in.first);
    }
    for (auto& out : outs) {
        conf = out.second->bye();
        cout << out.second->getID();
        if (conf == true) cout << "--disconnecting failed\n";
        else cout << "--disconnecting successful\n";
        outs.erase(out.first);
    }
    state.theEnd = false;
    cout << "...Disconnecting finished\n";
}

/**
 * Builds a new module and saves it's poiter to ins
 * @param el element with parametres for building a module
 */
void core::buildIn(TiXmlElement * el) {
    std::shared_ptr<std::map < std::string, std::string>> map = std::shared_ptr<std::map < std::string, std::string >> (new std::map<std::string, std::string>());
    TiXmlElement * el2 = el->FirstChildElement();
    while (el2 != NULL) {
        auto p = std::make_pair(el2->ValueStr(), el2->GetText());
        cout << el2->ValueStr() << "---" << el2->GetText() << "\n";
        map->insert(p);
        el2 = el2->NextSiblingElement();
    }
    //if (mb==nullptr) mb= moduleBuilder::getBuilder();
    std::shared_ptr<module> mod = moduleBuilder::buildModule(map); //z atributu mapu,predat builderu.
    if (mod) {
        mod->coreptr = this;
        ins[mod->getID()] = mod;
    } //vytvorit objekt a ulozit na nej ukazatel
}

/**
 * Builds a new module and saves it's poiter to ins
 * @param el element with parametres for building a module
 */
void core::buildOut(TiXmlElement * el) {
    std::shared_ptr<std::map < std::string, std::string>> map = std::shared_ptr<std::map < std::string, std::string >> (new std::map<std::string, std::string>());
    TiXmlElement * el2 = el->FirstChildElement();
    while (el2 != NULL) {
        auto p = std::make_pair(el2->ValueStr(), el2->GetText());
        cout << el2->ValueStr() << "---" << el2->GetText() << "\n";
        map->insert(p);
        el2 = el2->NextSiblingElement();
    }
    std::shared_ptr<module> mod = moduleBuilder::buildModule(map); //vytvorit objekt a ulozit na nej ukazatel
    if (mod) {
        mod->coreptr = this;
        outs[mod->getID()] = mod;
    }
}

/**
 * calls module::refresh(map) on every module from ins and outs
 */
void core::refresh() {
    //skrz ins a out, kazdymu refresh

}

/**
 * Puts incomming message into eventIn
 * @param e incomming eventMessage
 */
void core::sendIn(std::shared_ptr<eventMessage> e) {
    eventIn.push(e);
    state.callInThread = true;
}

/**
 * Puts incomming message into eventOut
 * @param e incomming eventMessage
 */
void core::sendOut(std::shared_ptr<eventMessage> e) {
    eventOut.push(e);
    state.callOutThread = true;
}

void core::checkIns() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    for (int i = 0; i < 100; i++) {
        if (state.callInThread) {
            std::lock_guard<std::mutex> lock(insMutex);
            while (!eventIn.empty()) {
                for (const auto& pair : ins) {
                    if (pair.second->getID() == eventIn.front()->getModuleId())
                        pair.second->accept(eventIn.front());
                }
                eventIn.pop();
            }
            state.callInThread = false;
        } else std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

void core::checkOuts() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    for (int i = 0; i < 100; i++) {
        if (state.callOutThread) {
            std::lock_guard<std::mutex> lock(outsMutex);
            while (!eventOut.empty()) {
                //eventMessage ev=  eventIn.front();
                for (const auto& pair : outs) {
                    pair.second->accept(eventOut.front());
                }
                eventOut.pop();
            }
            state.callOutThread = false;
        } else std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

}

void core::run() {
    std::thread tIn(&core::checkIns, this);
    std::thread tOut(&core::checkOuts, this);
    tIn.join();
    tOut.join();

}



