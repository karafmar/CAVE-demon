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
    
    static std::shared_ptr<eventMessageNotice> buildEventMessageNotice();
    static std::shared_ptr<eventMessageNewDevice> buildEventMessageNewDevice();
    static std::shared_ptr<eventMessageFeedback> buildEventMessageFeedback();
    static std::shared_ptr<eventMessageDataUpdate> buildEventMessageDataUpdate();

private:

};

#endif	/* EVENTBUILDER_H */

