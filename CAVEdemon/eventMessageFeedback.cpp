
/*!@file    eventMessageFeedback.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#include "eventMessageFeedback.h"

eventMessageFeedback::eventMessageFeedback() {
    
     timestamp = std::chrono::system_clock::now();
}

eventMessageFeedback::~eventMessageFeedback() {
}

eventType eventMessageFeedback::getType() {
    return eventType::FEEDBACK;
}

std::string eventMessageFeedback::getTypeStr(){
    return "feedback";
}

std::string eventMessageFeedback::getDeviceId() {
     return  deviceId;
}

std::string eventMessageFeedback::getModuleId() {
    return moduleId;
}

std::chrono::system_clock::time_point eventMessageFeedback::getTimestamp() {
    return timestamp;
}

void eventMessageFeedback::setModuleId(std::string id) {
    moduleId=id;
}

void eventMessageFeedback::setDeviceId(std::string id) {
    deviceId=id;
}