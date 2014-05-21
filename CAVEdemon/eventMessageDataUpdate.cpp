
/*!@file  eventMessageDataUpdate.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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