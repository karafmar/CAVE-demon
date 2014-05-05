/* 
 * File:   standardInputModule.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 13:10
 */

#include "standardInputModule.h"
#include "core.h"
#include "deviceBuilder.h"
#include "eventMessageNotice.h"
#include <sstream>

standardInputModule::standardInputModule() {
}

standardInputModule::~standardInputModule() {
}

/**
 * Basic constructor.
 * @param map Configuration data, always has key "id" and "devicepath".
 */
standardInputModule::standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    eventOut = std::queue<std::shared_ptr < eventMessage >> ();
    id = map->at("id");
    paths = std::vector<std::string>(0);
    makePaths(map->at("devicepath"), 0);
    devs = std::map<std::string, std::shared_ptr < device >> ();

    loadDevices();

    t = std::thread(&standardInputModule::sendEvents, this);
    //checkForDevices = std::thread(&standardInputModule::devCheck, this);
}

/**
 * Recursively parse s and puts parsed paths into paths.
 * @param s String to be parsed.
 * @param offset Offset for recursive calling.
 */
void standardInputModule::makePaths(std::string s, int offset) {
    std::string delimiter = ";";
    std::string::size_type pos = s.find(delimiter, offset);
    std::string part = s.substr(offset, pos - offset);
    paths.push_back(part);
    if ((pos + 1) != s.length()) makePaths(s, pos + 1);
}

/**
 * For each paths item tries to make a device and saves it to devs.
 */
void standardInputModule::loadDevices() {
    std::hash<std::string> hash_fn;
    for (auto& p : paths) {
        std::stringstream ss;
        ss << hash_fn(p);
        std::string hash = ss.str();
        if (!devs[hash]) {
            std::shared_ptr<device> dev = deviceBuilder::buildDevice(hash, p);
            if (dev) {
                dev->out = this;
                dev->open();
                devs[hash] = dev;
            }
        }
    }
}

/**
 * To be imlemented.
 */
void standardInputModule::devCheck() {
 /* while (!endThread) {     
        
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }*/
}

/**
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int standardInputModule::bye() {

    for (auto& d : devs) {
        d.second->close();
        devs.erase(d.first);
    }
    endThread = true;    
    t.join();
    //checkForDevices.join();
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void standardInputModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    makePaths(map->at("devicepath"), 0);
    loadDevices();
}


/**
 * Search for a device in devs with id same as eventMessage deviceId and sends it to the device.
 * @param e EventMessage to be send to a device.
 */
void standardInputModule::accept(std::shared_ptr<eventMessage> e) {
    for (auto& d : devs) {
        if (d.first == e->getDeviceId()) d.second->acceptFeedback(e);
        break;
    }
    e.reset();
}

/**
 * Adds eventMessage to eventOut, sets it's moduleId and sets callOutThread = true.
 * @param e Event to be send. 
 */
void standardInputModule::sendOut(std::shared_ptr<eventMessage> e) {
    std::lock_guard<std::mutex> lock(outsMutex);
    e->setModuleId(id);
    eventOut.push(e);
    callOutThread = true;
}

/**
 * Thread method.
 * Iterups by setting endThread true.
 * Awakes when callOutThread is true. 
 * Sends eventMessages from eventOut to the Core.
 * If eventMessage is eventMessageNotice with "BYE" as data, closes device first.  
 */
void standardInputModule::sendEvents() {
    while (!endThread) {
        if (callOutThread) {
            std::lock_guard<std::mutex> lock(outsMutex);
            while (!eventOut.empty()) {
                if (eventOut.front()->getType() == eventType::NOTICE) {
                    eventMessageNotice * e2 = dynamic_cast<eventMessageNotice*> (eventOut.front().get());
                    if (e2->getdata() == "BYE") {
                        devs[e2->getDeviceId()]->close();
                        std::cout << id << "::Closing device " << e2->getDeviceId() << "\n";
                        devs.erase(e2->getDeviceId());
                    }
                }
                coreptr->sendOut(eventOut.front());
                eventOut.pop();
            }
            callOutThread = false;
        } else std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
