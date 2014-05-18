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
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int mockInModule::bye() {
    /* all needed for releasing this module
     */
    t.join();
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void mockInModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    t = std::thread(&mockInModule::sendEvents, this);

}

/**
 * Accepts events from Core. 
 * @param e Accepted event
 */
void mockInModule::accept(std::shared_ptr<eventMessage> e) {
    
    std::cout <<e;
    e.reset();
}

/**
 * Function of thread t for sending mock events.
 */
void mockInModule::sendEvents() {
   /* for (int i = 0; i < 10; i++) {
        std::shared_ptr<eventMessageNotice> e =
                eventBuilder::buildEventMessageNotice();
        e->setDeviceId(std::to_string(i));
        e->setModuleId(mockInModule::getID());
        e->setdata("hello");
        coreptr->sendOut(e);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }*/

}
