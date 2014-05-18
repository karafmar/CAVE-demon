/*!
 * @file   eventMessage.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */

#ifndef EVENTMESSAGE_H
#define	EVENTMESSAGE_H

#include <string>
#include <chrono>
#include <iostream>
#include <memory>
#include "eventType.h"

/**
 * Virtual class for messages, all messages has to be children of this class. 
 */
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
    virtual std::chrono::system_clock::time_point getTimestamp()=0;
private:
   
};
std::ostream& operator<<(std::ostream& os, const std::shared_ptr<eventMessage>& event);
#endif	/* EVENTMESSAGE_H */

