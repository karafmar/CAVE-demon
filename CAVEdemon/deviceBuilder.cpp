/*!@file   deviceBuilder.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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
   try {
		eventHandler eH= std::shared_ptr<event::EventDevice>(new event::EventDevice(path));
                std::cout << "Loading default device.\n";
		return std::shared_ptr<defaultDevice>(new defaultDevice(id, eH));
	}
	catch (std::exception& e) {
		//std::cerr << e.what() << "\n";
		return nullptr;
	} 
    //std::cout << "Unknown device name, couldn't load device!\n";     
}
