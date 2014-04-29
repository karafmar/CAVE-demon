/* 
 * File:   defaultDevice.cpp
 * Author: marketa
 * 
 * Created on 27. duben 2014, 15:41
 */

#include <thread>
//#include <linux/input.h>
#include "defaultDevice.h"
#include <iostream>
#include <algorithm>
#include "eventBuilder.h"
//#include "inputType.h"
#include  "standardInputModule.h"

defaultDevice::defaultDevice(std::string newid, eventHandler neweh) {
    id = newid;
    eh = neweh;
    name = eh->get_name();
    key_info_ = eh->get_supported_key();
    abs_info_ = eh->get_supported_abs();
    rel_info_ = eh->get_supported_rel();
   /* std::for_each(
            key_info_.begin(), key_info_.end(), [](int const& i) {
                std::cout << i << std::endl;            });*/
}

defaultDevice::~defaultDevice() {
}

std::string defaultDevice::getId() {
    return id;
}

void defaultDevice::close() {
    endThread = true;
    t.join();

}

void defaultDevice::open() {
    // std::cout << "opening device\n";
    t = std::thread(&defaultDevice::checkForEvents, this);
}

void defaultDevice::acceptFeedback(std::shared_ptr<eventMessage> e) {
}

void defaultDevice::checkForEvents() {
    // newdevice message


    while (!endThread) {
        if (auto event = eh->wait_for_event(100)) {
            // std::cout<<"catch";
            std::shared_ptr<eventMessageDataUpdate> e = eventBuilder::buildEventMessageDataUpdate();
            e->setDeviceId(id);
            //std::cout <<event::get_event_name(event->type);
            if (event::get_event_name(event->type) == "ABSOLUTE AXIS") {
                e->setInputName(device::getCodeNameAbsAxis(event->code));
                e->setNewValue(event->value);
                out->sendOut(e);

            } else if (event::get_event_name(event->type) == "RELATIVE AXIS") {
                e->setInputName(device::getCodeNameRelAxis(event->code));
                e->setNewValue(event->value);
                out->sendOut(e);
            } else if (event::get_event_name(event->type) == "KEY") {
                e->setInputName(device::getCodeNameButton(event->code));

                e->setNewValue(event->value);
                out->sendOut(e);
            }
        }
        // std::cout << "Received an event " << event << "\n";
    }
}



