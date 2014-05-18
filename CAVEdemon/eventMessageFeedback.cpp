/* 
 * File:   eventMessageFeedback.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:38
 */

#include "eventMessageFeedback.h"

eventMessageFeedback::eventMessageFeedback() {
    
     timestamp = std::chrono::system_clock::now();
}

eventMessageFeedback::~eventMessageFeedback() {
}

eventType eventMessageFeedback::getType() {
    return eventType::FEEDBACK;
}

std::string eventMessageFeedback::getTypeStr(){
    return "feedback";
}

std::string eventMessageFeedback::getDeviceId() {
     return  deviceId;
}

std::string eventMessageFeedback::getModuleId() {
    return moduleId;
}

std::chrono::system_clock::time_point eventMessageFeedback::getTimestamp() {
    return timestamp;
}

void eventMessageFeedback::setModuleId(std::string id) {
    moduleId=id;
}

void eventMessageFeedback::setDeviceId(std::string id) {
    deviceId=id;
}