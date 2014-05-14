/* 
 * File:   defaultDevice.h
 * Author: marketa
 *
 * Created on 27. duben 2014, 15:41
 */

#ifndef DEFAULTDEVICE_H
#define	DEFAULTDEVICE_H

#include "device.h"
#include <chrono>   //time for sleep
#include <thread>

class defaultDevice : public device {
public:
    defaultDevice(std::string id, eventHandler neweh);
    virtual ~defaultDevice();
    std::string getId();
    void close();
    void open();
    void acceptFeedback(std::shared_ptr<eventMessage> e);
    void sendHello();
private:
    std::string id;
    std::thread t;
    std::string name;
    bool endThread = false;
    eventHandler eh;
    void checkForEvents();
    
    event::key_info_t key_info_;
    event::abs_info_t abs_info_;
    event::rel_info_t rel_info_;
};

#endif	/* DEFAULTDEVICE_H */

