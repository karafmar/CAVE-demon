/* 
 * File:   trackdModule.h
 * Author: marketa
 *
 * Created on 11. květen 2014, 20:00
 */

#ifndef TRACKDMODULE_H
#define	TRACKDMODULE_H

#include "module.h"
#include <thread>
#include <chrono>   //time for sleep
#include <mutex>
#include <queue>

class trackdModule: public module {
public:
    trackdModule();
    virtual ~trackdModule();
    trackdModule(std::shared_ptr<std::map<std::string, std::string>> map);
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);   
    std::thread t;

    std::string getID() {
        return id;
    }
private:
    bool callThread;
    bool endWork;
    void applyEvents();
    std::queue<std::shared_ptr<eventMessage>> events;
    std::string id;
    std::mutex eventMutex;
    std::mutex buttonMutex;
    std::mutex axisMutex;
    std::map<int, int> button;
    std::map<int, float> axis;
};

#endif	/* TRACKDMODULE_H */

