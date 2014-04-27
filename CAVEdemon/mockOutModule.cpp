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
    return 0;
}

void mockOutModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {

}

void mockOutModule::accept(std::shared_ptr<eventMessage> e) {
    // std::cout<<mockOutModule::getID()<<":::Event received - "<< e->getTypeStr()<<" type from "<<e->getDeviceId()<< " device "
    //        << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    std::cout << id << ":::" << e;
    std::shared_ptr<eventMessage> e2 =
            eventBuilder::buildEventMessageNotice();
    e2->setDeviceId(e->getDeviceId());
    e2->setModuleId(e->getModuleId());
    coreptr->sendIn(e2);

    e.reset();
}
