/* 
 * File:   eventBuilder.cpp
 * Author: marketa
 * 
 * Created on 21. duben 2014, 20:17
 */

#include "eventBuilder.h"


eventBuilder::eventBuilder() {
}

eventBuilder::~eventBuilder() {
}

std::shared_ptr<eventMessageNotice> eventBuilder::buildEventMessageNotice(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessageNotice>(new eventMessageNotice(devId, modId));
}

std::shared_ptr<eventMessageNewDevice> eventBuilder::buildEventMessageNewDevice(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessageNewDevice>(new eventMessageNewDevice(devId, modId));
}

std::shared_ptr<eventMessageFeedback> eventBuilder::buildEventMessageFeedback(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessageFeedback>(new eventMessageFeedback(devId, modId));
}

std::shared_ptr<eventMessageDataUpdate> eventBuilder::buildEventMessageDataUpdate(std::string devId, std::string modId) {
    return std::shared_ptr<eventMessageDataUpdate>(new eventMessageDataUpdate(devId, modId));
}