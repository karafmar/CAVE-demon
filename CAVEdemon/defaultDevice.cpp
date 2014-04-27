/* 
 * File:   defaultDevice.cpp
 * Author: marketa
 * 
 * Created on 27. duben 2014, 15:41
 */

#include "defaultDevice.h"

defaultDevice::defaultDevice(std::string newid, eventHandler eh) {
    id = newid;
}

defaultDevice::~defaultDevice() {
}

std::string defaultDevice::getId() {
}

void defaultDevice::close() {
}

void defaultDevice::open() {
}

void defaultDevice::acceptFeedback(std::shared_ptr<eventMessage> e) {
}
