/* 
 * File:   eventMessageDataUpdate.h
 * Author: marketa
 *
 * Created on 26. duben 2014, 20:39
 */

#ifndef EVENTMESSAGEDATAUPDATE_H
#define	EVENTMESSAGEDATAUPDATE_H

#include "eventMessage.h"
#include "inputType.h"

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
    inputType getInputType();
     int getInputCode();
    int getNewValue();
    void setInputType(inputType input);
    void setInputName(std::string nam);
    void setInputCode(int c);
    void setNewValue(int val);
    void setModuleId(std::string id);
    void setDeviceId(std::string id);

private:
    std::string deviceId;
    std::string moduleId;
    std::time_t timestamp;
    inputType it;
    std::string inputName = "";
    int code;
    int newValue=0;
};



#endif	/* EVENTMESSAGEDATAUPDATE_H */

