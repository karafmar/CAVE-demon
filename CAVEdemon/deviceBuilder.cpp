/* 
 * File:   deviceBuilder.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 12:36
 */

#include "deviceBuilder.h"
#include <iostream>
#include <cstddef>
#include "eventHandler/EventDevice.h"
#include "defaultDevice.h"

deviceBuilder::deviceBuilder() {
}

deviceBuilder::~deviceBuilder() {
}

std::shared_ptr<device> deviceBuilder::buildDevice(std::string id,std::string path) {
        try {
		event::EventDevice eventHandler(path);
		return std::shared_ptr<defaultDevice>(new defaultDevice(id, eventHandler));
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		return nullptr;
	}
    
    
    
    
    
    //std::cout << "Unknown device name, couldn't load device!\n";
    
   
}
