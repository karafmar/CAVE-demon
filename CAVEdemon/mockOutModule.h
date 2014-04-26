/* 
 * File:   mockOutModule.h
 * Author: marketa
 *
 * Created on 25. duben 2014, 12:14
 */

#ifndef MOCKOUTMODULE_H
#define	MOCKOUTMODULE_H

#include "module.h"
#include <chrono>   //time for sleep
#include <thread>
#include <mutex>



class mockOutModule  : public module {
public:
    mockOutModule();
    virtual ~mockOutModule();
    
    mockOutModule(std::shared_ptr<std::map<std::string, std::string>> map) {
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


#endif	/* MOCKOUTMODULE_H */

