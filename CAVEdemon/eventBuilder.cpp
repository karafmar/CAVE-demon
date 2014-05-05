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

/**
 * Builds a eventMessageNotice
 * @return eventMessageNotice
 */
std::shared_ptr<eventMessageNotice> eventBuilder::buildEventMessageNotice() {
    return std::shared_ptr<eventMessageNotice>(new eventMessageNotice());
}

/**
 * Builds a eventMessageNewDevice
 * @return eventMessageNewDevice
 */
std::shared_ptr<eventMessageNewDevice> eventBuilder::buildEventMessageNewDevice() {
    return std::shared_ptr<eventMessageNewDevice>(new eventMessageNewDevice());
}

/**
 * Builds a eventMessageFeedback
 * @return eventMessageFeedback
 */
std::shared_ptr<eventMessageFeedback> eventBuilder::buildEventMessageFeedback() {
    return std::shared_ptr<eventMessageFeedback>(new eventMessageFeedback());
}

/**
 * Builds a eventMessageDataUpdate
 * @return eventMessageDataUpdate
 */
std::shared_ptr<eventMessageDataUpdate> eventBuilder::buildEventMessageDataUpdate() {
    return std::shared_ptr<eventMessageDataUpdate>(new eventMessageDataUpdate());
}