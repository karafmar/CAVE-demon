/* 
 * File:   eventMessage.h
 * Author: Marketa
 *
 * Created on 13. duben 2014, 20:08
 */

#ifndef EVENTMESSAGE_H
#define	EVENTMESSAGE_H

#include <string>
#include <ctime>
#include <iostream>
#include <memory>
#include "eventType.h"

class eventMessage {
public:
    
    eventMessage();
  
    virtual ~eventMessage();
    virtual eventType getType()=0;
    virtual std::string getTypeStr()=0;
    virtual std::string getDeviceId()=0;
    virtual std::string getModuleId()=0;
    virtual void setModuleId(std::string id)=0;
    virtual void setDeviceId(std::string id)=0;
    virtual std::time_t getTimestamp()=0;
//    virtual 
private:
    
};
std::ostream& operator<<(std::ostream& os, const std::shared_ptr<eventMessage>& event);
#endif	/* EVENTMESSAGE_H */

