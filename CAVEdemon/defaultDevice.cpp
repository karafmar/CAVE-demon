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
#include "icButton.h"
#include "icRelAxis.h"
#include "icAbsAxis.h"

/**
 * Sets devices attributes.
 * @param newid Id of new device.
 * @param neweh eventHandler. 
 */
defaultDevice::defaultDevice(std::string newid, eventHandler neweh) {
    id = newid;
    eh = neweh;
    name = eh->get_name();
    key_info_ = eh->get_supported_key();
    abs_info_ = eh->get_supported_abs();
    rel_info_ = eh->get_supported_rel();
   
}

defaultDevice::~defaultDevice() {

}

std::string defaultDevice::getId() {
    return id;
}

/**
 * Sets endThread = true and waits for t to join.
 */
void defaultDevice::close() {
    endThread = true;
    t.join(); 
}

/**
 * Calls sendHello() and starts t;
 */
void defaultDevice::open() {
    sendHello();
    t = std::thread(&defaultDevice::checkForEvents, this);
}

/**
 * Makes std::shared_ptr<eventMessageNewDevice> with device data and sends it to out.
 */
void defaultDevice::sendHello() {
    std::shared_ptr<eventMessageNewDevice> e = eventBuilder::buildEventMessageNewDevice();
    e->setDeviceId(id);
    e->setName(name);
    std::vector<std::shared_ptr < ic>> input;
    std::for_each(key_info_.begin(), key_info_.end(), [&](int const& i) {
        input.push_back(std::shared_ptr<ic>(new icButton(i, device::getCodeNameButton(i))));
    });
    for (auto& abs : abs_info_) {
        input.push_back(std::shared_ptr<ic>(new icAbsAxis(abs.first, device::getCodeNameAbsAxis(abs.first),
                abs.second.minimum, abs.second.maximum,	abs.second.fuzz,abs.second.flat,abs.second.resolution      
        )));
    }
    std::for_each(rel_info_.begin(), rel_info_.end(), [&](int const& i) {
        input.push_back(std::shared_ptr<ic>(new icRelAxis(i, device::getCodeNameRelAxis(i))));    
    });
    e->setInput(input);
    out->sendOut(e);
}

/**
 * 
 * @param e Feedback message.
 */
void defaultDevice::acceptFeedback(std::shared_ptr<eventMessage> e) {
}

/**
 * Thread method.
 * Iterrupts when endThread is set true.
 * Handles events and sends eventMessages to out.
 * If exception is thrown, sends BYE message.
 */
void defaultDevice::checkForEvents() {
    while (!endThread) {
        try {
            if (auto event = eh->wait_for_event(100)) {
                std::shared_ptr<eventMessageDataUpdate> e = eventBuilder::buildEventMessageDataUpdate();
                e->setDeviceId(id);
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
        } catch (std::exception& e) {
            std::cerr << "Device " << id << "::" << e.what() << "\n";
            std::shared_ptr<eventMessageNotice> e = eventBuilder::buildEventMessageNotice();
            e->setDeviceId(id);
            e->setdata("BYE");
            out->sendOut(e);
            return;
        }
    }
}



