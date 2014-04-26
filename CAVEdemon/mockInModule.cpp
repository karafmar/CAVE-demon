/* 
 * File:   mockInModule.cpp
 * Author: marketa
 * 
 * Created on 22. duben 2014, 13:52
 */

#include "mockInModule.h"
#include "core.h"
#include "eventBuilder.h"
#include <iostream>


mockInModule::mockInModule() {
}

mockInModule::~mockInModule() {
}

/**
 * Ending the module and preparing for deleting
 * @return 0 if success
 */
int mockInModule::bye() {
    /* all needed for releasing this module
     */
     t.join();
    return 0;
}


void mockInModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    t = std::thread(&mockInModule::sendEvents, this);
   
}

void mockInModule::accept(std::shared_ptr<eventMessage> e) {
    std::cout<<mockInModule::getID()<<":::Event received - "<< e->getType()<<" type from "<<e->getDeviceId()<< " device "
            << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    e.reset();
}

void mockInModule::sendEvents(){
    for (int i = 0; i < 10; i++) {
        std::lock_guard<std::mutex> lock(coreptr->outsMutex);
        std::shared_ptr<eventMessage> e = 
                eventBuilder::buildEventMessageNotice(std::to_string(i),mockInModule::getID());
        
        coreptr->sendOut(e)  ;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }         
       
}