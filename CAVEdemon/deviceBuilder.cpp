/* 
 * File:   deviceBuilder.cpp
 * Author: marketa
 * 
 * Created on 25. duben 2014, 12:36
 */

#include "deviceBuilder.h"
#include <iostream>
#include <fstream>
#include <cstddef>
#include "eventHandler/EventDevice.h"
#include "defaultDevice.h"

deviceBuilder::deviceBuilder() {
}

deviceBuilder::~deviceBuilder() {
}


/**
 * Builds a new device if connected.
 * @param id ID of new device.
 * @param path Path to new device.
 * @return device if successful, nullptr if unable to load device.
 */
std::shared_ptr<device> deviceBuilder::buildDevice(std::string id,std::string path) {
std::ofstream s;
s.open(path);
if (s.fail()){
    return nullptr;
}   
   try {
		eventHandler eH= std::shared_ptr<event::EventDevice>(new event::EventDevice(path));
                std::cout << "Loading default device.\n";
		return std::shared_ptr<defaultDevice>(new defaultDevice(id, eH));
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		return nullptr;
	} 
    //std::cout << "Unknown device name, couldn't load device!\n";     
}
