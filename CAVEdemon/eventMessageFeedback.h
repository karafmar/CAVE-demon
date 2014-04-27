/* 
 * File:   eventMessageFeedback.h
 * Author: marketa
 *
 * Created on 26. duben 2014, 20:38
 */

#ifndef EVENTMESSAGEFEEDBACK_H
#define	EVENTMESSAGEFEEDBACK_H

#include "eventMessage.h"

class eventMessageFeedback : public eventMessage {
public:
    eventMessageFeedback();
    virtual ~eventMessageFeedback();
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::time_t getTimestamp();
    std::string getTypeStr();
    void setModuleId(std::string id);
    void setDeviceId(std::string id);

private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    std::string data = "";
};
#endif	/* EVENTMESSAGEFEEDBACK_H */

