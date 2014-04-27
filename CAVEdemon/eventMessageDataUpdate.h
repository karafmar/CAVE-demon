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
    virtual ~eventMessageDataUpdate();
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::time_t getTimestamp();
    std::string getTypeStr();
    std::string getInputName();
    int getNewValue();
    void setInputName(std::string nam);
    void setNewValue(int val);
    void setModuleId(std::string id);
    void setDeviceId(std::string id);

private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    
    std::string inputName = "";
    int newValue=0;
};



#endif	/* EVENTMESSAGEDATAUPDATE_H */

