/* 
 * File:   eventMessageNotice.cpp
 * Author: marketa
 * 
 * Created on 21. duben 2014, 19:21
 */


#include "eventMessageNotice.h"
#include "eventType.h"

eventMessageNotice::eventMessageNotice(std::string devId, std::string modId){
    deviceId=devId;
    moduleId=modId;
    timestamp=std::time(NULL);
}

eventMessageNotice::eventMessageNotice() {
}

eventMessageNotice::~eventMessageNotice() {
}

eventType eventMessageNotice::getType() {
    return eventType::NOTICE;
}

std::string eventMessageNotice::getTypeStr(){
    return "notice";
}

std::string eventMessageNotice::getDeviceId() {
     return  deviceId;
}

std::string eventMessageNotice::getModuleId() {
    return moduleId;
}

std::time_t eventMessageNotice::getTimestamp() {
    return timestamp;
}