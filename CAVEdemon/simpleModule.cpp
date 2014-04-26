#include "simpleModule.h"
#include <iostream>

simpleModule::simpleModule() {
}

simpleModule::~simpleModule() {

}
/**
 * Ending the module and preparing for deleting
 * @return 0 if success
 */
int simpleModule::bye() {
    /* all needed for releasing this module
     */
    return 0;
}


void simpleModule::refresh(std::shared_ptr<std::map<std::string, std::string>> map) {
    

}

void simpleModule::accept(std::shared_ptr<eventMessage> e) {
    std::cout<<simpleModule::getID()<<":::Event received - "<< e->getType()<<" type from "<<e->getDeviceId()<< " device "
            << e->getModuleId()<<" module in "<< e->getTimestamp()<<"\n";
    e.reset();
}

