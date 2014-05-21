/*!
 * @file   mockInModule.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 16. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */
#ifndef MOCKINMODULE_H
#define	MOCKINMODULE_H

#include "module.h"
#include <chrono>   //time for sleep
#include <thread>
#include <mutex>

/**
 * Class for simulating sending messages.
 */
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

