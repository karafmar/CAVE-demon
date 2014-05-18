/*!
 * @file   moduleBuilder.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */

#ifndef MODULEBUILDER_H
#define	MODULEBUILDER_H

#include "module.h"
#include <map>
#include <memory>


/**
 * Class with one static method for building modules.
 */
class moduleBuilder {
public:
    moduleBuilder();
    virtual ~moduleBuilder();
    static std::shared_ptr<module> buildModule(std::shared_ptr<std::map<std::string, std::string>> map);
private:
   
};

#endif	/* MODULEBUILDER_H */

