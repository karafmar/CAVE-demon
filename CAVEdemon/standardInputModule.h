/* 
 * File:   standardInputModule.h
 * Author: marketa
 *
 * Created on 25. duben 2014, 13:10
 */

#ifndef STANDARDINPUTMODULE_H
#define	STANDARDINPUTMODULE_H

#include "module.h"
#include "device.h"

class standardInputModule : public module {
public:
    standardInputModule();
    standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map);
    virtual ~standardInputModule();
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);
    std::string getID(){return id;}
    private: 
        std::string id;
        std::map<std::string, std::shared_ptr < device >> devs;
};

#endif	/* STANDARDINPUTMODULE_H */

