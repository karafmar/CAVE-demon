/* 
 * File:   device.h
 * Author: marketa
 *
 * Created on 25. duben 2014, 12:37
 */

#ifndef DEVICE_H
#define	DEVICE_H



#include <string>
#include "eventMessage.h"
#include <memory>
#include "eventHandler/EventDevice.h"

class standardInputModule;

using eventHandler = std::shared_ptr<event::EventDevice>;

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
private:
    
};

#endif	/* DEVICE_H */

