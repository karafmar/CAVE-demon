/*!
 * @file    eventMessageFeedback.h 
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef EVENTMESSAGEFEEDBACK_H
#define	EVENTMESSAGEFEEDBACK_H

#include "eventMessage.h"


/**
 * Feedback message.
 */
class eventMessageFeedback : public eventMessage {
public:
    eventMessageFeedback();
    virtual ~eventMessageFeedback();
    eventType getType();
    std::string getDeviceId();
    std::string getModuleId();
    std::chrono::system_clock::time_point getTimestamp();
    std::string getTypeStr();
    void setModuleId(std::string id);
    void setDeviceId(std::string id);

private:
    std::string deviceId;
    std::string moduleId;
    std::chrono::system_clock::time_point timestamp;
    std::string data = "";
};
#endif	/* EVENTMESSAGEFEEDBACK_H */

