/*!
 * @file 		event.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		5.3.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#include <linux/input.h>
#include <iostream>
#include <string>

#include "EventDevice.h"

/*
int main(int argc, char** argv)
{
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <device path>\n";
		return 1;
	}
	try {
		event::EventDevice device(argv[1]);
		while(true) {
			if (auto event = device.wait_for_event(100)) {
				std::cout << "Received an event " << event << "\n";
			}
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		return 1;
	}
	return 0;
}
*/

