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
#include "eventType.h"

class eventMessage {
public:
    
    eventMessage();
   // eventMessage(const event& orig);
    virtual ~eventMessage();
    virtual eventType getType()=0;
    virtual std::string getTypeStr()=0;
    virtual std::string getDeviceId()=0;
    virtual std::string getModuleId()=0;
    virtual std::time_t getTimestamp()=0;
    
private:
    
};

#endif	/* EVENTMESSAGE_H */

