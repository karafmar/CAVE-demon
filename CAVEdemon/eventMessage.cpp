/* 
 * File:   eventMessage.cpp
 * Author: Marketa
 * 
 * Created on 13. duben 2014, 20:08
 */

#include "eventMessage.h"
#include "eventMessageNotice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageNewDevice.h"
#include "ic.h"
#include <algorithm>

eventMessage::eventMessage() {
}

eventMessage::~eventMessage() {
}

std::ostream& operator<<(std::ostream& os, const std::shared_ptr<eventMessage>& event) {
    if (!event) return os;
    auto timestamp = std::chrono::system_clock::to_time_t(event->getTimestamp());
   //long timestamp =  std::chrono::duration_cast<std::chrono::milliseconds>(event->getTimestamp()).count()
    os << "Event received - " << event->getTypeStr() << " type from " << event->getDeviceId() << " device "
            << event->getModuleId() << " module from " << timestamp;
    if (event->getType() == eventType::NOTICE) {
        eventMessageNotice * e = dynamic_cast<eventMessageNotice*> (event.get());
        os << " data:" << e->getdata();
    }
    if (event->getType() == eventType::DATA_UPDATE) {
        eventMessageDataUpdate * e = dynamic_cast<eventMessageDataUpdate*> (event.get());
        os << " Value of:" << e->getInputName() << " changed on " << e->getNewValue();
    }
    if (event->getType() == eventType::NEW_DEVICE) {
        eventMessageNewDevice * e = dynamic_cast<eventMessageNewDevice*> (event.get());
        os << " Input keys: ";
        std::vector<std::shared_ptr < ic>> input = e->getInput();
        std::for_each(
                input.begin(), input.end(), [&](std::shared_ptr < ic> i) {
                    os << i->getName() << "-";
                }
                
                );
    }

    os << "\n";
    return os;

}