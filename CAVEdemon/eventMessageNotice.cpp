/* 
 * File:   eventMessageNotice.cpp
 * Author: marketa
 * 
 * Created on 21. duben 2014, 19:21
 */


#include "eventMessageNotice.h"

eventMessageNotice::eventMessageNotice() {
    timestamp = std::time(NULL);
}

eventMessageNotice::~eventMessageNotice() {
}

eventType eventMessageNotice::getType() {
    return eventType::NOTICE;
}

std::string eventMessageNotice::getTypeStr() {
    return "notice";
}

std::string eventMessageNotice::getDeviceId() {
    return deviceId;
}

std::string eventMessageNotice::getModuleId() {
    return moduleId;
}

std::time_t eventMessageNotice::getTimestamp() {
    return timestamp;
}

std::string eventMessageNotice::getdata() {
    return data;
}

void eventMessageNotice::setdata(std::string newData) {
    data = newData;
}

void eventMessageNotice::setModuleId(std::string id) {
    moduleId = id;
}

void eventMessageNotice::setDeviceId(std::string id) {
    deviceId = id;
}
