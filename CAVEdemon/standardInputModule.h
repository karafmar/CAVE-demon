/*!
 * @file   standardInputModule.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 25. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
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
#include <condition_variable>

/**
 * Standard module for devices. 
 */
class standardInputModule : public module {
public:
    standardInputModule();
    standardInputModule(std::shared_ptr<std::map<std::string, std::string>> map);
    virtual ~standardInputModule();
    int bye();
    void refresh(std::shared_ptr<std::map<std::string, std::string>> map);
    void accept(std::shared_ptr<eventMessage> e);

    std::string getID() {
        return id;
    }
    void sendOut(std::shared_ptr<eventMessage> e);
private:
    std::string id;
    std::map<std::string, std::shared_ptr < device >> devs;
    std::vector<std::string> paths;
    std::queue<std::shared_ptr<eventMessage>> eventOut;
    std::mutex pathsMutex;
    std::mutex outsMutex;
    std::mutex devsMutex;
    std::condition_variable outCondition;
    std::thread t;
    bool endThread = false;
    void sendEvents();
    void makePaths(std::string s, int offset);
    void loadDevices();

};

#endif	/* STANDARDINPUTMODULE_H */

