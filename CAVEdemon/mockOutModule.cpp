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
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int mockOutModule::bye() {
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void mockOutModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {

}

/**
 * Accepts events from Core. Sends back feedback.
 * @param e Accepted event
 */
void mockOutModule::accept(std::shared_ptr<eventMessage> e) {
    std::cout << id << ":::" << e;
    std::shared_ptr<eventMessage> e2 =
            eventBuilder::buildEventMessageNotice();
    e2->setDeviceId(e->getDeviceId());
    e2->setModuleId(e->getModuleId());
    coreptr->sendIn(e2);

    e.reset();
}
