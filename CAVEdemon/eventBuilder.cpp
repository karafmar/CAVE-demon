/*!@file  eventBuilder.cpp  
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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