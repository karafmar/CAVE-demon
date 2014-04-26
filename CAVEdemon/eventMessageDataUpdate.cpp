/* 
 * File:   eventMessageDataUpdate.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:39
 */

#include "eventMessageDataUpdate.h"

eventMessageDataUpdate::eventMessageDataUpdate() {
}

eventMessageDataUpdate::eventMessageDataUpdate(std::string devId, std::string modId){
    deviceId=devId;
    moduleId=modId;
    timestamp=std::time(NULL);
}

eventMessageDataUpdate::~eventMessageDataUpdate() {
}

eventType eventMessageDataUpdate::getType() {
    return eventType::DATA_UPDATE;
}

std::string eventMessageDataUpdate::getTypeStr(){
    return "update";
}

std::string eventMessageDataUpdate::getDeviceId() {
     return  deviceId;
}

std::string eventMessageDataUpdate::getModuleId() {
    return moduleId;
}

std::time_t eventMessageDataUpdate::getTimestamp() {
    return timestamp;
}