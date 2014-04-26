/* 
 * File:   mockInModule.h
 * Author: marketa
 *
 * Created on 22. duben 2014, 13:52
 */

#ifndef MOCKINMODULE_H
#define	MOCKINMODULE_H

#include "module.h"
#include <chrono>   //time for sleep
#include <thread>
#include <mutex>

class mockInModule : public module {
public:
    mockInModule();
    virtual ~mockInModule();

    mockInModule(std::shared_ptr<std::map<std::string, std::string>> map) {
        id = map->at("id");
        refresh(map);
    }
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);
    std::thread t;

    std::string getID() {
        return id;
    }
private:
    std::string id;
    void sendEvents();
};

#endif	/* MOCKINMODULE_H */

