/* 
 * File:   module.h
 * Author: Marketa
 *
 * Created on 13. duben 2014, 19:35
 */

#ifndef MODULE_H
#define	MODULE_H

#include <string>
#include "eventMessage.h"
#include <map>
#include <memory>


class core;

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

