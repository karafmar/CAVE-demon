/* 
 * File:   deviceBuilder.h
 * Author: marketa
 *
 * Created on 25. duben 2014, 12:36
 */

#ifndef DEVICEBUILDER_H
#define	DEVICEBUILDER_H

#include "device.h"
#include <string>
#include <memory>

class deviceBuilder {
public:
    deviceBuilder();
    static std::shared_ptr<device> buildDevice(std::string id,std::string path);
    virtual ~deviceBuilder();
private:

};

#endif	/* DEVICEBUILDER_H */

