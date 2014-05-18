/*!
 * @file   device.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */

#ifndef DEVICE_H
#define	DEVICE_H

#include <string>
#include "eventMessage.h"
#include <memory>
#include "eventHandler/EventDevice.h"

class standardInputModule;

using eventHandler = std::shared_ptr<event::EventDevice>;

/**
 * Virtual class, all devices must be child classes of device class.
 */
class device {
public:
    device();
   
    virtual ~device();
    virtual std::string getId()=0;
    virtual void close()=0;
    virtual void open()=0;
    virtual void acceptFeedback(std::shared_ptr<eventMessage> e)=0;
    standardInputModule * out;
    static std::string getCodeNameButton(uint16_t code);
    static std::string getCodeNameRelAxis(uint16_t code);
    static std::string getCodeNameAbsAxis(uint16_t code);
    virtual void sendHello()=0;
private:
    
};

#endif	/* DEVICE_H */

