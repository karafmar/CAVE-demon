/* 
 * File:   moduleBuilder.cpp
 * Author: Marketa
 * 
 * Created on 16. duben 2014, 18:42
 */


#include "moduleBuilder.h"
#include "simpleModule.h"
#include "mockInModule.h"
#include "mockOutModule.h"
#include "standardInputModule.h"
#include <iostream>
#include <cstddef>

moduleBuilder::moduleBuilder() {
}

moduleBuilder::~moduleBuilder() {
}

/**
 * Builds a module based on information from map. 
 * @param map Map with configuration parametres which will module receive in constructor.
 * @return Returns std::shared_ptr<module>  or nullptr if unknown or unable to load. 
 */
std::shared_ptr<module> moduleBuilder::buildModule(std::shared_ptr<std::map<std::string, std::string>> map) {
    if (map->count("id") == 0 || map->count("class") == 0) {
        std::cout << "Missing module parameters, couldnt load module!\n";
        return nullptr;
    }
    //std::cout << map->at("id")<< "/////////\n";
    if (map->at("class") == "simplemodule") {
        std::cout << "Loading simpleModule.\n";
        return std::shared_ptr<module>(new simpleModule(map));
    }
    if (map->at("class") == "mockinmodule") {
        std::cout << "Loading mockInModule.\n";
        return std::shared_ptr<module>(new mockInModule(map));
    }
    if (map->at("class") == "mockoutmodule") {
        std::cout << "Loading mockOutModule.\n";
        return std::shared_ptr<module>(new mockOutModule(map));
    }
    
    if (map->at("class") == "standardinputmodule") {
        std::cout << "Loading standardInputModule.\n";
        return std::shared_ptr<module>(new standardInputModule(map));
    }
    

    std::cout << "Unknown module, unable to load!\n";
    return nullptr;

}
