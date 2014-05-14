/* 
 * File:   trackdModule.cpp
 * Author: marketa
 * 
 * Created on 11. květen 2014, 20:00
 */

#include <utility>  //make_pair
#include <algorithm>    //foreach
#include "trackdModule.h"
#include "eventMessageNotice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageNewDevice.h"
#include "inputType.h"
#include "ic.h"


trackdModule::trackdModule() {
}

trackdModule::~trackdModule() {
}

trackdModule::trackdModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    id = map->at("id");
    callThread = false;
    endWork=false;
    events = std::queue<std::shared_ptr < eventMessage >> ();
    button = std::map<int, int>();
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
                    button.clear();
                    axis.clear();
                }
            } else if (events.front()->getType() == eventType::NEW_DEVICE) {
                eventMessageNewDevice * e = dynamic_cast<eventMessageNewDevice*> (events.front().get());
                std::vector<std::shared_ptr < ic>> inputs = e->getInput();
                std::for_each(inputs.begin(), inputs.end(), [&](std::shared_ptr < ic> i) {
                    if (i->getType() == inputType::BUTTON) {
                        button.insert(std::make_pair(i->getCode(), 0));
                    }
                    if ((i->getType() == inputType::ABS_AXIS) || (i->getType() == inputType::REL_AXIS)) {
                        button.insert(std::make_pair(i->getCode(), 0));
                    }
                });

            } else if (events.front()->getType() == eventType::DATA_UPDATE) {
                eventMessageDataUpdate * e = dynamic_cast<eventMessageDataUpdate*> (events.front().get());
                if (e->getInputType() == inputType::BUTTON) {
                    std::lock_guard<std::mutex> lock(buttonMutex);
                    button.at(e->getInputCode()) = e->getNewValue();
                }
                if ((e->getInputType() == inputType::ABS_AXIS) || (e->getInputType() == inputType::REL_AXIS)) {
                    std::lock_guard<std::mutex> lock(axisMutex);
                    axis.at(e->getInputCode()) = e->getNewValue();
                }
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
}
