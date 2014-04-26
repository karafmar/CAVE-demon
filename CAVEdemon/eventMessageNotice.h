/* 
 * File:   eventMessageNotice.h
 * Author: marketa
 *
 * Created on 21. duben 2014, 19:21
 */

#ifndef EVENTMESSAGENOTICE_H
#define	EVENTMESSAGENOTICE_H

#include "eventMessage.h"

class eventMessageNotice : public eventMessage {
public:
    eventMessageNotice(std::string devId, std::string modId);
    eventMessageNotice();
    virtual ~eventMessageNotice();
    
    std::string getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::time_t getTimestamp();
    
  
    
private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    std::string data="";
};

#endif	/* EVENTMESSAGENOTICE_H */

