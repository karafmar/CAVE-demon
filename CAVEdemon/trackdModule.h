/*!
 * @file   mtrackdModule.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 11. 5. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef TRACKDMODULE_H
#define	TRACKDMODULE_H

#include "module.h"
#include "shm/trackd_common.h"
#include <thread>
#include <chrono>   //time for sleep
#include <mutex>
#include <queue>

/**
 * Class for output module compatible with trackd.
 */
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
    bool write;
    void applyEvents();
    std::queue<std::shared_ptr<eventMessage>> events;
    std::string id;
    std::thread t1;
    std::mutex eventMutex;
    std::mutex buttonMutex;
    std::mutex axisMutex;
    std::map<int, int> button;
    std::map<int, float> axis;
    void writeToSHM(trackd::TrackdControlShmBlock *control_block) ;
    //trackd::TrackdControlShmBlock control_block;
};

#endif	/* TRACKDMODULE_H */

