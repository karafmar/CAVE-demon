/* 
 * File:   eventBuilder.h
 * Author: marketa
 *
 * Created on 21. duben 2014, 20:17
 */

#ifndef EVENTBUILDER_H
#define	EVENTBUILDER_H

#include "eventMessage.h"
#include <memory> 


class eventBuilder {
public:
    eventBuilder();
    virtual ~eventBuilder();
    
    static std::shared_ptr<eventMessage> buildEventMessageNotice(std::string devId, std::string modId);
    static std::shared_ptr<eventMessage> buildEventMessageNewDevice(std::string devId, std::string modId);
    static std::shared_ptr<eventMessage> buildEventMessageFeedback(std::string devId, std::string modId);
    static std::shared_ptr<eventMessage> buildEventMessageDataUpdate(std::string devId, std::string modId);

private:

};

#endif	/* EVENTBUILDER_H */

