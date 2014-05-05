#ifndef SIMPLEMODULE_H
#define SIMPLEMODULE_H

#include "module.h"

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
