/*!
 * @file  defaultDevice.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef DEFAULTDEVICE_H
#define	DEFAULTDEVICE_H

#include "device.h"
#include <chrono>   //time for sleep
#include <thread>

/**Class represents a default device connected via USB.
 */
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

