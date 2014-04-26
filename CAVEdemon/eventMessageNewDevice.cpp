/* 
 * File:   eventMessageNewDevice.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:38
 */

#include "eventMessageNewDevice.h"
#include "eventType.h"

eventMessageNewDevice::eventMessageNewDevice() {
}

eventMessageNewDevice::eventMessageNewDevice(std::string devId, std::string modId){
    deviceId=devId;
    moduleId=modId;
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