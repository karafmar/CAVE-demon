/*!@file    core.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#include "core.h"
#include <cstdlib>  //basic lib
#include <queue>
#include <utility>  //make_pair

#include <chrono>   //time for sleep
#include <thread>

using namespace std;

/**
 * Basic constructor.
 * calls loadConfig();
 */
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
 * Loads all i/o models from mainconfig.xml.
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
    if (ins.empty())cout << "Warning: no input modules found!\n";
    if (outs.empty())cout << "Warning: no output modules found!\n";
    cout << "... Loading finished\n";
}

/**
 *Disconnect all modules and sets state.theEnd false.
 */
void core::end(int signal) {
    cout << "Ending program...\n";
    bool conf = false;
    for (auto& in : ins) {
        std::lock_guard<std::mutex> lock(inModuleMutex);
        conf = in.second->bye();
        cout << in.second->getID();
        if (conf == true) cout << "--disconnecting failed\n";
        else cout << "--disconnecting successful\n";
        ins.erase(in.first);
    }
    for (auto& out : outs) {
        std::lock_guard<std::mutex> lock(outModuleMutex);
        conf = out.second->bye();
        cout << out.second->getID();
        if (conf == true) cout << "--disconnecting failed\n";
        else cout << "--disconnecting successful\n";
        outs.erase(out.first);
    }
    state.theEnd = false;
    cout << "...Disconnecting finished\n";
    state.theEnd = true;
}

/**
 * Builds a new module and saves it's poiter to ins.
 * @param el element (TinyXML) with parametres for building a module
 */
void core::buildIn(TiXmlElement * el) {
    std::shared_ptr<std::map < std::string, std::string>> map = std::shared_ptr<std::map < std::string, std::string >> (new std::map<std::string, std::string>());
    TiXmlElement * el2 = el->FirstChildElement();
    while (el2 != NULL) {
        auto p = std::make_pair(el2->ValueStr(), el2->GetText());
        map->insert(p);
        el2 = el2->NextSiblingElement();
    }
    std::string newId = map->at("id");
    if (ins.find(newId) != ins.end()) ins.at(newId)->refresh(map);
    else {
        std::shared_ptr<module> mod = moduleBuilder::buildModule(map);
        if (mod) {
            mod->coreptr = this;
            ins[mod->getID()] = mod;
        }
    }
}

/**
 * Builds a new module and saves it's poiter to ins.
 * @param el element with parametres for building a module
 */
void core::buildOut(TiXmlElement * el) {
    std::shared_ptr<std::map < std::string, std::string>> map = std::shared_ptr<std::map < std::string, std::string >> (new std::map<std::string, std::string>());
    TiXmlElement * el2 = el->FirstChildElement();
    while (el2 != NULL) {
        auto p = std::make_pair(el2->ValueStr(), el2->GetText());
        map->insert(p);
        el2 = el2->NextSiblingElement();
    }
    std::string newId = map->at("id");
    if (outs.find(newId) != outs.end()) outs.at(newId)->refresh(map);
    else {
        std::shared_ptr<module> mod = moduleBuilder::buildModule(map);
        if (mod) {
            mod->coreptr = this;
            outs[mod->getID()] = mod;
        }
    }
}

/**
 * calls module::refresh(map) on every module from ins and outs
 */
void core::refresh() {
    loadConfig();
}

/**
 * Puts incomming message into eventIn.
 * Sets  state.callInThread = true.
 * @param e incomming eventMessage
 */
void core::sendIn(std::shared_ptr<eventMessage> e) {
    std::lock_guard<std::mutex> lock(insMutex);
    eventIn.push(e);
    inCondition.notify_all();
}

/**
 * Puts incomming message into eventOut.
 * Sets state.callOutThread = true.
 * @param e incomming eventMessage
 */
void core::sendOut(std::shared_ptr<eventMessage> e) {
    std::lock_guard<std::mutex> lock(outsMutex);
    eventOut.push(e);
    outCondition.notify_all();
}

/**
 * Thread's function. 
 * Sends eventMessages form eventIn to target modules. Pops event after sending. 
 * Thread is awoken by setting state.callInThread true.
 */
void core::checkIns() {
    while (!state.theEnd) {
        std::unique_lock<std::mutex> lock(insMutex);
        inCondition.wait_for(lock, std::chrono::milliseconds(100));
        std::lock_guard<std::mutex> lock2(inModuleMutex);
        while (!eventIn.empty()) {
            for (const auto& pair : ins) {
                if (pair.second->getID() == eventIn.front()->getModuleId())
                    pair.second->accept(eventIn.front());
            }
            eventIn.pop();
        }
    }
}

/**
 * Thread's function. 
 * Sends eventMessages form eventOut to all output modules. Pops event after sending. 
 * Thread is awoken by setting state.callOutThread true.
 */
void core::checkOuts() {
    while (!state.theEnd) {
        std::unique_lock<std::mutex> lock(outsMutex);
        outCondition.wait_for(lock, std::chrono::milliseconds(100));
        std::lock_guard<std::mutex> lock2(outModuleMutex);
        while (!eventOut.empty()) {
            for (const auto& pair : outs) {
                pair.second->accept(eventOut.front());
            }
            eventOut.pop();
        }
    }
}

/**
 * Runs threads tIn and tOut.
 * Waits for their joining.
 */
void core::run() {
    if (state.endProgram) return;
    std::thread tIn(&core::checkIns, this);
    std::thread tOut(&core::checkOuts, this);
    tIn.join();
    tOut.join();

}

