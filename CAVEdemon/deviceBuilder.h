/*!
 * @file  deviceBuilder.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
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

