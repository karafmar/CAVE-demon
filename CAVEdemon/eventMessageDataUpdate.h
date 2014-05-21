/*!
 * @file  eventMessageDataUpdate.h 
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef EVENTMESSAGEDATAUPDATE_H
#define	EVENTMESSAGEDATAUPDATE_H

#include "eventMessage.h"
#include "inputType.h"

/**
 * Message for updating data.
 */
class eventMessageDataUpdate : public eventMessage {
public:
    eventMessageDataUpdate();
    virtual ~eventMessageDataUpdate();
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::chrono::system_clock::time_point getTimestamp();
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
    std::chrono::system_clock::time_point timestamp;
    inputType it;
    std::string inputName = "";
    int code;
    int newValue=0;
};



#endif	/* EVENTMESSAGEDATAUPDATE_H */

