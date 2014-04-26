/* 
 * File:   mockOutModule.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 12:14
 */

#include "mockOutModule.h"
#include "core.h"
#include "eventBuilder.h"
#include <iostream>

mockOutModule::mockOutModule() {
}

mockOutModule::~mockOutModule() {
}

/**
 * Ending the module and preparing for deleting
 * @return 0 if success
 */
int mockOutModule::bye() {
    /* all needed for releasing this module
     */
     //t.join();
    return 0;
}


void mockOutModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    //t = std::thread(&mockOutModule::sendEvents, this);
   
}

void mockOutModule::accept(std::shared_ptr<eventMessage> e) {
   std::cout<<mockOutModule::getID()<<":::Event received - "<< e->getType()<<" type from "<<e->getDeviceId()<< " device "
            << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    
    std::lock_guard<std::mutex> lock(coreptr->insMutex);
        std::shared_ptr<eventMessage> e2 = 
                eventBuilder::buildEventMessageNotice(e->getDeviceId(),e->getModuleId());
        
        coreptr->sendIn(e2)  ;
    
    
    
    
    
    e.reset();
}
/*
void mockOutModule::sendEvents(){
    for (int i = 0; i < 10; i++) {
        std::lock_guard<std::mutex> lock(coreptr->outsMutex);
        std::shared_ptr<eventMessage> e = 
                eventBuilder::buildEventMessageNotice(std::to_string(i),mockOutModule::getID());
        
        coreptr->sendOut(e)  ;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }         
       
}*/
