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
    write = false;
    endWork = false;
    events = std::queue<std::shared_ptr < eventMessage >> ();
    button = std::map<int, int>();
    axis = std::map<int, float>();
    refresh(map);

    t1 = std::thread(&trackdModule::applyEvents, this);
}

/**
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int trackdModule::bye() {
    endWork = true;
    t1.join();
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void trackdModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {

}

/**
 * A thread method.
 * Ends by setting  endWork = true.
 * Picks the first event from events and applies it according to event type.
 * Bye message cleans both button and axis maps. 
 * New device message fills in button and axis maps.
 * Data update message changes date in axis and button
 * After applying, the message is pushed from queue. When reaches the end of events sets callThread = false.
 */
void trackdModule::applyEvents() {
    try {
        trackd::TrackdControlShmBlock control_block(trackd::control_key, true);
        while (!endWork) {
            if (callThread == true) {
                std::lock_guard<std::mutex> lock(eventMutex);
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
                                axis.insert(std::make_pair(i->getCode(), 0));
                            }
                        });
                        control_block.set_button_count(button.size());
                        control_block.set_value_count(axis.size());
                        write = true;
                    } else if (events.front()->getType() == eventType::DATA_UPDATE) {
                        eventMessageDataUpdate * e = dynamic_cast<eventMessageDataUpdate*> (events.front().get());
                        if (e->getInputType() == inputType::BUTTON) {
                            std::lock_guard<std::mutex> lock(buttonMutex);
                            if (button.find(e->getInputCode()) != button.end())
                                button.at(e->getInputCode()) = e->getNewValue();
                            write = true;
                        }
                        if ((e->getInputType() == inputType::ABS_AXIS) || (e->getInputType() == inputType::REL_AXIS)) {
                            std::lock_guard<std::mutex> lock(axisMutex);
                            if (axis.find(e->getInputCode()) != axis.end())
                                axis.at(e->getInputCode()) = e->getNewValue();
                            write = true;
                        }
                    }
                    events.pop();
                }
                if (write == true) writeToSHM(&control_block);
                callThread = false;
            } else std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    } catch (std::exception& e) {
        std::clog << "Error while loading SHM block: " << e.what() << "\n";
    }

}

void trackdModule::writeToSHM(trackd::TrackdControlShmBlock *control_block) {
    try {
        std::cout <<"I should be writing\n";
        int i=0;
        
         for (auto& b : button) {
            control_block->set_button(i, b.second);
             i++;
         }
        i=0;  
         for (auto& a : axis) {
             control_block->set_value(i, a.second);
              i++;      
         }
    } catch (std::exception& e) {
        std::clog << "Error: " << e.what() << "\n";
    }
    write = false;
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
