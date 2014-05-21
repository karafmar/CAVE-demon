/*!
 * @file  deviceBuilder.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */
#ifndef DEVICEBUILDER_H
#define	DEVICEBUILDER_H

#include "device.h"
#include <string>
#include <memory>

/**
 * Class with one static method for building devices
 */
class deviceBuilder {
public:
    deviceBuilder();
    static std::shared_ptr<device> buildDevice(std::string id,std::string path);
    virtual ~deviceBuilder();
private:

};

#endif	/* DEVICEBUILDER_H */

