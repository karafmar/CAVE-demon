/* 
 * File:   deviceBuilder.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 12:36
 */

#include "deviceBuilder.h"
#include <iostream>
#include <cstddef>

deviceBuilder::deviceBuilder() {
}

deviceBuilder::~deviceBuilder() {
}

std::shared_ptr<device> deviceBuilder::buildDevice(std::string name) {
    //check ze seznamu
    
    
    
    
    
    std::cout << "Unknown device name, couldn't load device!\n";
       return nullptr; 
   // return std::shared_ptr<device>(new device);
}
