/*!
 * @file 		trackd_shm_read.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2014
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#include "trackd_common.h"
#include "signal_handler.h"
#include <iostream>
#include <thread>
#include <chrono>

/*
int main3()
{
	try {
		std::clog << "Opening shared memory segment\n";
		trackd::TrackdControlShmBlock control_block(trackd::control_key, false);
		std::clog << "Shared memory segment mapped\n";
		sig_handler::initialize();
		while (!sig_handler::finished()) {
			// Simple printout of the values from control_block.

			const auto& t = control_block.get_time();
			const uint32_t button_count = control_block.get_button_count();
			const uint32_t value_count = control_block.get_value_count();
			std::clog <<
				"Time: " << t.first << "." <<t.second <<"\n"<<
				"Button count: " << button_count <<
				", Value count: " << value_count << "\n\n";
			std::clog <<"Buttons: ";
			for (unsigned int i = 0; i < button_count; ++i) {
				std::clog << (control_block.get_button(i)?"X":".");
			}
			std::clog <<"\n";
			std::clog <<"Values: ";
			for (unsigned int i = 0; i < button_count; ++i) {
				if (i % 4 == 0) std::clog <<"\n";
				std::clog << control_block.get_value(i) << " ";

			}
			std::clog <<"\n\n";

			std::this_thread::sleep_for(std::chrono::milliseconds(50));
		}
		std::clog << "Cleaning up\n";
	}
	catch(std::exception& e){
		std::clog << "Error: " << e.what() << "\n";
	}
}
*/