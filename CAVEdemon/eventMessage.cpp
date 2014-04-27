/* 
 * File:   eventMessage.cpp
 * Author: Marketa
 * 
 * Created on 13. duben 2014, 20:08
 */

#include "eventMessage.h"
#include "eventMessageNotice.h"
#include "eventMessageDataUpdate.h"

eventMessage::eventMessage() {
}

eventMessage::~eventMessage() {
}

std::ostream& operator<<(std::ostream& os, const std::shared_ptr<eventMessage>& event) {
    if (!event) return os;
    os << "Event received - " << event->getTypeStr() << " type from " << event->getDeviceId() << " device "
            << event->getModuleId() << " module from " << event->getTimestamp() ;
          if (event->getType()==eventType::NOTICE) {
             eventMessageNotice * e = dynamic_cast<eventMessageNotice*>(event.get());
             os<< " data:"<<e->getdata();
          }  
          if (event->getType()==eventType::DATA_UPDATE) {
             eventMessageDataUpdate * e = dynamic_cast<eventMessageDataUpdate*>(event.get());
             os<< " Value of:"<<e->getInputName()<< " changed on "<< e->getNewValue();
          }   
           os << "\n";
    return os;

}