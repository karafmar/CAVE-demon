/* 
 * File:   standardInputModule.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 13:10
 */

#include "standardInputModule.h"
#include "core.h"
#include "deviceBuilder.h"
#include <sstream>

standardInputModule::standardInputModule() {
}

standardInputModule::~standardInputModule() {
}

standardInputModule::standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    eventOut = std::queue<std::shared_ptr < eventMessage >> ();
    id = map->at("id");
    paths = std::vector<std::string>(0);
    paths.push_back(map->at("devicepath"));
    devs = std::map<std::string, std::shared_ptr < device >> ();

    std::hash<std::string> hash_fn;
    for (auto& p : paths) {
        std::stringstream ss;
        ss << hash_fn(p);
        std::string hash = ss.str();
        std::shared_ptr<device> dev = deviceBuilder::buildDevice(hash, p);
        if (dev) {
            dev->out= this;
            
            devs[hash] = dev;
            dev->open();
        }
    }
    t = std::thread(&standardInputModule::sendEvents, this);

}

/**
 * Ending the module and preparing for deleting
 * @return 0 if success
 */
int standardInputModule::bye() {

    for (auto& d : devs) {
        d.second->close();
        devs.erase(d.first);
    }
    endThread = true;
    t.join();
    return 0;
}

void standardInputModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {


}

void standardInputModule::accept(std::shared_ptr<eventMessage> e) {
    for (auto& d : devs) {
        if (d.first == e->getDeviceId()) d.second->acceptFeedback(e);
        break;
    }
    // std::cout<<simpleModule::getID()<<":::Event received - "<< e->getTypeStr()<<" type from "<<e->getDeviceId()<< " device "
    //        << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    e.reset();
}

void standardInputModule::sendOut(std::shared_ptr<eventMessage> e) {
    std::lock_guard<std::mutex> lock(outsMutex);
    e->setModuleId(id);
    ////////if eventtype ==notice and closed device, call device.close() and throw it from the list.
    eventOut.push(e);
    callOutThread = true;

}

void standardInputModule::sendEvents() {
    while (!endThread) {
        if (callOutThread) {
            std::lock_guard<std::mutex> lock(outsMutex);
            while (!eventOut.empty()) {
                coreptr->sendOut(eventOut.front());
                eventOut.pop();
            }
            callOutThread = false;
        } else std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
