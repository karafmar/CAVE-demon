/*!
 * @file   simpleModule.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */
#ifndef SIMPLEMODULE_H
#define SIMPLEMODULE_H

#include "module.h"

/**
 * Simple module for learning how to write modules.
 */
class simpleModule : public module {
public:
    simpleModule();
    simpleModule(std::shared_ptr<std::map<std::string, std::string>> map);
    virtual ~simpleModule();
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);
    std::string getID(){return id;}
    private: 
        void sendEvents();
        std::string id;
};

#endif // SIMPLEMODULE_H
