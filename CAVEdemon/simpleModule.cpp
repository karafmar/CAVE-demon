/*!@file    simpleModule.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */


#include "simpleModule.h"
#include <iostream>
#include "inputType.h"
#include "eventMessage.h"

simpleModule::simpleModule() {
}

simpleModule::~simpleModule() {

}

/**
 * Basic constructor.
 * @param map Configuration data, always has key "id".
 */

simpleModule::simpleModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    id = map->at("id");
    /*
     *Here add your own configuration
     *or simply forward it: refresh(map);
     *Don't forget to add new constructors to moduleBuilder.cpp 
     */

}

/**
 * Ending the module and preparing for deleting.
 * @return bool If success returns O, else 1.
 */
int simpleModule::bye() {
    /* Here add all needed for releasing this module.
     */
    return 0;
}

/**
 * Refresh configuration.
 * @param map Map with new data.
 */
void simpleModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    /*
     * Here add code for changing module's attributes
     * NEVER change modul's "id" ! 
     */

}

/**
 * Accepts events from Core. 
 * @param e Accepted event
 */
void simpleModule::accept(std::shared_ptr<eventMessage> e) {

    /* Here use event date, for more information see documentation for eventMessage
     * Basic data common for all kinds of events:
     * e->getType() returns eventType
     * e->getTypeStr() returns string for eventType
     * e->getDeviceId() returns id of devise which made eventMessage or id of target of feedback
     * e->getModuleId() returns ide of module which made eventMessage or id of target of feedback
     * e->getTimestamp() returns time when eventMessage was made
     * For standard input you can use operator<< */
    std::cout << id << ":::" << e;
    /*Dont forget to release pointer: */
    e.reset();
}

/**
 * This function shows example of sending eventMessage
 */
void simpleModule::sendEvents() {
    /*Event is build in following way :
     *std::shared_ptr<eventMessageNotice> e = eventBuilder::buildEventMessageNotice();
     *Next set it's attributes:
     * (in this case we don't have device id, but it needs to be set)
     * e->setDeviceId(std::to_string("0"));
     * e->setdata("hello");
     * 
     * Before sending message out, always set module ID! Even when recieving message from a device
     * e->setModuleId(getID());
     * Send message:
     * coreptr->sendOut(e);
*/

}