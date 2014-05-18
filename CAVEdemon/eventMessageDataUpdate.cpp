/* 
 * File:   eventMessageDataUpdate.cpp
 * Author: marketa
 * 
 * Created on 26. duben 2014, 20:39
 */

#include "eventMessageDataUpdate.h"

eventMessageDataUpdate::eventMessageDataUpdate() {
     timestamp = std::chrono::high_resolution_clock::now();
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

std::chrono::system_clock::time_point eventMessageDataUpdate::getTimestamp() {
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

 int eventMessageDataUpdate::getInputCode(){
     return code;
 }
 
 
 void eventMessageDataUpdate::setInputCode(int c){
     code = c;
 }
 
 void eventMessageDataUpdate::setInputType(inputType input){
     it= input;
 }
 
 
 inputType eventMessageDataUpdate::getInputType(){
     return it;
 }