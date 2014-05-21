/*!
 * @file  eventMessageNotice.h 
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
  * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef EVENTMESSAGENOTICE_H
#define	EVENTMESSAGENOTICE_H

#include "eventMessage.h"

/**
 * EventMessage for simple string message.
 */
class eventMessageNotice : public eventMessage {
public:
    eventMessageNotice();
    virtual ~eventMessageNotice();
    
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::chrono::system_clock::time_point getTimestamp();
    std::string getTypeStr();
    std::string getdata();
    void setModuleId(std::string id);
    void setDeviceId(std::string id);
    void setdata(std::string newData);
    //std::ostream& operator<<(std::ostream& os, const std::shared_ptr<eventMessageNotice>& event);
private:
    std::string deviceId;
    std::string moduleId;
    std::chrono::system_clock::time_point timestamp;
    std::string data="";
};

#endif	/* EVENTMESSAGENOTICE_H */

