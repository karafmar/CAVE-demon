/* 
 * File:   standardInputModule.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 13:10
 */

#include "standardInputModule.h"

standardInputModule::standardInputModule() {
}

standardInputModule::~standardInputModule() {
}

standardInputModule::standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map){
     id = map->at("id");
     devs=  std::map<std::string, std::shared_ptr < device >>();
    }


/**
 * Ending the module and preparing for deleting
 * @return 0 if success
 */
int standardInputModule::bye() {
    for (auto& d : devs) {
        d.second->bye();
        devs.erase(d.first);
    }
    
    return 0;
}


void standardInputModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    

}

void standardInputModule::accept(std::shared_ptr<eventMessage> e) {
    for (auto& d : devs) {
        if (d.first==e->getDeviceId()) d.second->acceptFeedback(e);
        break;
    }
   // std::cout<<simpleModule::getID()<<":::Event received - "<< e->getType()<<" type from "<<e->getDeviceId()<< " device "
    //        << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    e.reset();
}