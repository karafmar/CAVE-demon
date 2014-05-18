/* 
 * File:   eventMessageNewDevice.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:38
 */

#include "eventMessageNewDevice.h"
#include "eventType.h"


eventMessageNewDevice::eventMessageNewDevice() {
    //timestamp = std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now());
    timestamp = std::chrono::system_clock::now();
    input = std::vector<std::shared_ptr<ic>>(0);
}

eventMessageNewDevice::~eventMessageNewDevice() {
}

eventType eventMessageNewDevice::getType() {
    return eventType::NEW_DEVICE;
}

std::string eventMessageNewDevice::getTypeStr() {
    return "new device";
}

std::string eventMessageNewDevice::getDeviceId() {
    return deviceId;
}

std::string eventMessageNewDevice::getModuleId() {
    return moduleId;
}

std::chrono::system_clock::time_point eventMessageNewDevice::getTimestamp() {
    return timestamp;
}

std::string eventMessageNewDevice::getName() {
    return name;
}

void eventMessageNewDevice::setModuleId(std::string id) {
    moduleId = id;
}

void eventMessageNewDevice::setDeviceId(std::string id) {
    deviceId = id;
}

void eventMessageNewDevice::setName(std::string newname) {
    name = newname;
}

std::vector<std::shared_ptr<ic>> eventMessageNewDevice::getInput() {
    return input;
}

void eventMessageNewDevice::setInput(std::vector<std::shared_ptr<ic>> in){
    input=in;
}

