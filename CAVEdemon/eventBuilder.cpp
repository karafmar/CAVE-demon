/* 
 * File:   eventBuilder.cpp
 * Author: marketa
 * 
 * Created on 21. duben 2014, 20:17
 */

#include "eventBuilder.h"
#include "eventMessageNewDevice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageFeedback.h"
#include "eventMessageNotice.h"

eventBuilder::eventBuilder() {
}

eventBuilder::~eventBuilder() {
}

std::shared_ptr<eventMessage> eventBuilder::buildEventMessageNotice(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessage>(new eventMessageNotice(devId, modId));
}

std::shared_ptr<eventMessage> eventBuilder::buildEventMessageNewDevice(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessage>(new eventMessageNewDevice(devId, modId));
}

std::shared_ptr<eventMessage> eventBuilder::buildEventMessageFeedback(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessage>(new eventMessageFeedback(devId, modId));
}

std::shared_ptr<eventMessage> eventBuilder::buildEventMessageDataUpdate(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessage>(new eventMessageDataUpdate(devId, modId));
}