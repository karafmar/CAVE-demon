/* 
 * File:   eventBuilder.cpp
 * Author: marketa
 * 
 * Created on 21. duben 2014, 20:17
 */

#include "eventBuilder.h"

eventBuilder::eventBuilder() {
}


eventBuilder::~eventBuilder() {
}

std::shared_ptr<eventMessage> eventBuilder::buildEventMessageNotice(std::string devId, std::string modId){
    
    return std::shared_ptr<eventMessage>(new eventMessageNotice(devId, modId));

}