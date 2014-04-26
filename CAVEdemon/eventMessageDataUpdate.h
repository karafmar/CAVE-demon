/* 
 * File:   eventMessageDataUpdate.h
 * Author: marketa
 *
 * Created on 26. duben 2014, 20:39
 */

#ifndef EVENTMESSAGEDATAUPDATE_H
#define	EVENTMESSAGEDATAUPDATE_H

#include "eventMessage.h"

class eventMessageDataUpdate : public eventMessage {
public:
    eventMessageDataUpdate();
    eventMessageDataUpdate(std::string devId, std::string modId);
    virtual ~eventMessageDataUpdate();
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::time_t getTimestamp();
    std::string getTypeStr();


private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    std::string data = "";
};

#endif	/* EVENTMESSAGEDATAUPDATE_H */

