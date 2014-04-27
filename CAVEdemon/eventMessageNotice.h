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
    eventMessageNotice();
    virtual ~eventMessageNotice();
    
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::time_t getTimestamp();
    std::string getTypeStr();
    std::string getdata();
    void setModuleId(std::string id);
    void setDeviceId(std::string id);
    void setdata(std::string newData);
    
private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    std::string data="";
};

#endif	/* EVENTMESSAGENOTICE_H */

