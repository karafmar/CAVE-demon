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
#include "module.h"
#include <memory>
#include "eventHandler/EventDevice.h"

using eventHandler = event::EventDevice;

class device {
public:
    device();
   
    virtual ~device();
    std::string getId();
    void close();
    void open();
    void acceptFeedback(std::shared_ptr<eventMessage> e);
    module * out; 
private:
    
};

#endif	/* DEVICE_H */

