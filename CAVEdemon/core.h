/*!
 * @file   core.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */
#ifndef CORE_H
#define	CORE_H

#include "tinyxml/tinyxml.h"
#include "eventMessage.h"
#include "moduleBuilder.h"
#include "module.h"
#include <mutex>
#include <queue>
#include <condition_variable>

struct State {
    bool endProgram = false;
    bool theEnd = false;
};

class core {
public:
    core();
    virtual ~core();
    
    void loadConfig();
    void buildIn(TiXmlElement * el);
    void buildOut(TiXmlElement * el);
    void checkIns();
    void checkOuts();
    void sendIn(std::shared_ptr<eventMessage> e);
    void sendOut(std::shared_ptr<eventMessage> e);
    void refresh();
    void end(int signal);
    void run();
    
    State state;  
    std::mutex insMutex;
    std::mutex outsMutex;
    std::mutex inModuleMutex;
    std::mutex outModuleMutex;
    std::condition_variable outCondition;
    std::condition_variable inCondition;

private:
    std::map<std::string, std::shared_ptr<module>> ins;
    std::map<std::string, std::shared_ptr<module>> outs;
    std::queue<std::shared_ptr<eventMessage>> eventIn;
    std::queue<std::shared_ptr<eventMessage>> eventOut;
      
};

#endif	/* CORE_H */

