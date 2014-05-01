/* 
 * File:   eventMessageNewDevice.h
 * Author: marketa
 *
 * Created on 26. duben 2014, 20:38
 */

#ifndef EVENTMESSAGENEWDEVICE_H
#define	EVENTMESSAGENEWDEVICE_H

#include "eventMessage.h"

class eventMessageNewDevice : public eventMessage {
public:
    eventMessageNewDevice();
    virtual ~eventMessageNewDevice();
    eventType getType();
    std::string getDeviceId();
    std::string getName();
    std::string getModuleId();
    std::time_t getTimestamp();
    std::string getTypeStr();
    void setModuleId(std::string id);
    void setDeviceId(std::string id);
    void setName(std::string newname);

private:
    std::string deviceId;
    std::string name;
    std::string moduleId;
    std::time_t timestamp;
    std::string data = "";
};
#endif	/* EVENTMESSAGENEWDEVICE_H */

