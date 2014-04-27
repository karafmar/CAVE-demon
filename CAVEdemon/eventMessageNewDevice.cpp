/* 
 * File:   eventMessageNewDevice.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:38
 */

#include "eventMessageNewDevice.h"
#include "eventType.h"

eventMessageNewDevice::eventMessageNewDevice() {
    timestamp=std::time(NULL); 
}

eventMessageNewDevice::~eventMessageNewDevice() {
}

eventType eventMessageNewDevice::getType() {
    return eventType::NEW_DEVICE;
}

std::string eventMessageNewDevice::getTypeStr(){
    return "new device";
}

std::string eventMessageNewDevice::getDeviceId() {
     return  deviceId;
}

std::string eventMessageNewDevice::getModuleId() {
    return moduleId;
}

std::time_t eventMessageNewDevice::getTimestamp() {
    return timestamp;
}

void eventMessageNewDevice::setModuleId(std::string id) {
    moduleId=id;
}

void eventMessageNewDevice::setDeviceId(std::string id) {
    deviceId=id;
}

