/*!
 * @file   eventMessageNewDevice.h 
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef EVENTMESSAGENEWDEVICE_H
#define	EVENTMESSAGENEWDEVICE_H

#include "eventMessage.h"
#include "ic.h"
#include <vector>

/**
 * EventMessage intrudicing a new device.
 */
class eventMessageNewDevice : public eventMessage {
public:
    eventMessageNewDevice();
    virtual ~eventMessageNewDevice();
    eventType getType();
    std::string getDeviceId();
    std::string getName();
    std::string getModuleId();
    std::chrono::system_clock::time_point getTimestamp();
    std::string getTypeStr();
    std::vector<std::shared_ptr<ic>> getInput();
    void setInput(std::vector<std::shared_ptr<ic>> in);
    void setModuleId(std::string id);
    void setDeviceId(std::string id);
    void setName(std::string newname);

private:
    std::string deviceId;
    std::string name;
    std::string moduleId;
    std::chrono::system_clock::time_point timestamp;
    std::vector<std::shared_ptr<ic>> input;
};
#endif	/* EVENTMESSAGENEWDEVICE_H */

