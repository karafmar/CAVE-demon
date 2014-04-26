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

class device {
public:
    device();
   
    virtual ~device();
    void bye();
    void acceptFeedback(std::shared_ptr<eventMessage> e);
private:

};

#endif	/* DEVICE_H */

