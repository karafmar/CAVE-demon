/* 
 * File:   defaultDevice.h
 * Author: marketa
 *
 * Created on 27. duben 2014, 15:41
 */

#ifndef DEFAULTDEVICE_H
#define	DEFAULTDEVICE_H

#include "device.h"


class defaultDevice : public device{
public:
    defaultDevice(std::string id, eventHandler eh);
    virtual ~defaultDevice();
    std::string getId();
    void close();
    void open();
    void acceptFeedback(std::shared_ptr<eventMessage> e);
    module * out;    
private:
    std::string  id;
};

#endif	/* DEFAULTDEVICE_H */

