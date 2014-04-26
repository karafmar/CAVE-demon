/* 
 * File:   eventBuilder.h
 * Author: marketa
 *
 * Created on 21. duben 2014, 20:17
 */

#ifndef EVENTBUILDER_H
#define	EVENTBUILDER_H

#include "eventMessageNewDevice.h"
#include "eventMessageDataUpdate.h"
#include "eventMessageFeedback.h"
#include "eventMessageNotice.h"
#include <memory> 


class eventBuilder {
public:
    eventBuilder();
    virtual ~eventBuilder();
    
    static std::shared_ptr<eventMessageNotice> buildEventMessageNotice(std::string devId, std::string modId);
    static std::shared_ptr<eventMessageNewDevice> buildEventMessageNewDevice(std::string devId, std::string modId);
    static std::shared_ptr<eventMessageFeedback> buildEventMessageFeedback(std::string devId, std::string modId);
    static std::shared_ptr<eventMessageDataUpdate> buildEventMessageDataUpdate(std::string devId, std::string modId);

private:

};

#endif	/* EVENTBUILDER_H */

