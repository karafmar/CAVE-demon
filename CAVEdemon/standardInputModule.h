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
#include <vector>
#include <queue>
#include <mutex>
#include <chrono>   //time for sleep
#include <thread>

class standardInputModule : public module {
public:
    standardInputModule();
    standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map);
    virtual ~standardInputModule();
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);
    std::string getID(){return id;}
    void sendOut(std::shared_ptr<eventMessage> e);
    private: 
        std::string id;
        std::map<std::string, std::shared_ptr < device >> devs;
        std::vector<std::string> paths;
        std::queue<std::shared_ptr<eventMessage>> eventOut;
        std::mutex outsMutex;
        bool callOutThread =false;
        std::thread t;
        bool endThread= false;
        void sendEvents();
};

#endif	/* STANDARDINPUTMODULE_H */

