/*!
 * @file   moduleBuilder.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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

