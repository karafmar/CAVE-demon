/* 
 * File:   trackdModule.cpp
 * Author: marketa
 * 
 * Created on 11. květen 2014, 20:00
 */

#include "trackdModule.h"
#include "eventMessageNotice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageNewDevice.h"
#include "inputType.h"

trackdModule::trackdModule() {
}

trackdModule::~trackdModule() {
}

trackdModule::trackdModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    id = map->at("id");
    callThread = false;
    events = std::queue<std::shared_ptr < eventMessage >> ();
    botton = std::map<int, int>();
    axis = std::map<int, float>();
    refresh(map);
}

/**
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int trackdModule::bye() {
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void trackdModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {

}

void trackdModule::applyEvents() {
    //while
    if (callThread == true) {
        std::lock_guard<std::mutex> lock(eventMutex);
        //        std::lock_guard<std::mutex> lock2(inModuleMutex);
        while (!events.empty()) {
            if (events.front()->getType() == eventType::NOTICE) {
                eventMessageNotice * e = dynamic_cast<eventMessageNotice*> (events.front().get());
                if (e->getdata() == "BYE") {
                    botton.clear();
                    axis.clear();
                }
            } else if (events.front()->getType() == eventType::NEW_DEVICE) {
                eventMessageNewDevice * e = dynamic_cast<eventMessageNewDevice*> (events.front().get());
            } else if (events.front()->getType() == eventType::DATA_UPDATE) {
                eventMessageDataUpdate * e = dynamic_cast<eventMessageDataUpdate*> (events.front().get());
                if (e->getInputType() == inputType::BUTTON) {
                    e->getInputName();
                    e->getNewValue();
                }
                if ((e->getInputType() == inputType::ABS_AXIS) || (e->getInputType() == inputType::REL_AXIS))
                    e->getNewValue();
            }



            events.pop();

        }
        callThread = false;

    }
}

/**
 * Accepts events from Core. Sends back feedback.
 * @param e Accepted event
 */
void trackdModule::accept(std::shared_ptr<eventMessage> e) {
    std::lock_guard<std::mutex> lock(eventMutex);
    events.push(e);
    callThread = true;
    std::cout << id << " in " << std::time(NULL) << ":::" << e;
    /*std::shared_ptr<eventMessage> e2 =
            eventBuilder::buildEventMessageNotice();
    e2->setDeviceId(e->getDeviceId());
    e2->setModuleId(e->getModuleId());
    coreptr->sendIn(e2);

    e.reset();*/
}
