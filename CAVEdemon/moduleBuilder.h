/* 
 * File:   moduleBuilder.h
 * Author: Marketa
 *
 * Created on 16. duben 2014, 18:42
 */

#ifndef MODULEBUILDER_H
#define	MODULEBUILDER_H

#include "module.h"
#include <map>
#include <memory>

class moduleBuilder {
public:
    moduleBuilder();
    virtual ~moduleBuilder();
    static std::shared_ptr<module> buildModule(std::shared_ptr<std::map<std::string, std::string>> map);
private:
   
};

#endif	/* MODULEBUILDER_H */

