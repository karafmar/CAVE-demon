/* 
 * File:   eventMessageDataUpdate.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:39
 */

#include "eventMessageDataUpdate.h"

eventMessageDataUpdate::eventMessageDataUpdate() {
    timestamp = std::time(NULL);
}

eventMessageDataUpdate::~eventMessageDataUpdate() {
}

eventType eventMessageDataUpdate::getType() {
    return eventType::DATA_UPDATE;
}

std::string eventMessageDataUpdate::getTypeStr() {
    return "update";
}

std::string eventMessageDataUpdate::getDeviceId() {
    return deviceId;
}

std::string eventMessageDataUpdate::getModuleId() {
    return moduleId;
}

std::time_t eventMessageDataUpdate::getTimestamp() {
    return timestamp;
}

void eventMessageDataUpdate::setModuleId(std::string id) {
    moduleId = id;
}

void eventMessageDataUpdate::setDeviceId(std::string id) {
    deviceId = id;
}

std::string eventMessageDataUpdate::getInputName() {
    return inputName;
}

int eventMessageDataUpdate::getNewValue() {
    return newValue;
}

void eventMessageDataUpdate::setInputName(std::string nam) {
    inputName=nam;
}

void eventMessageDataUpdate::setNewValue(int val) {
    newValue=val;
}