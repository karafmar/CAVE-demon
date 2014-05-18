/*!
 * @file   module.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef MODULE_H
#define	MODULE_H

#include <string>
#include "eventMessage.h"
#include <map>
#include <memory>


class core;

/**
 * Virtual class for all input and output modules
 */
class module {
public:
    module();
    module(std::shared_ptr<std::map<std::string, std::string>> map);
    virtual ~module();
    virtual int bye() = 0;
    virtual void refresh(std::shared_ptr<std::map<std::string, std::string>> map) = 0;
    virtual void accept(std::shared_ptr<eventMessage> e) = 0;
    virtual std::string getID() = 0;
    
    core * coreptr;
};

#endif	/* MODULE_H */

