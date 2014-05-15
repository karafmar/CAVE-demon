/*!
 * @file 		trackd_shm_write.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2014
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */

#include "trackd_common.h"
#include "signal_handler.h"
#include <iostream>
#include <random>
#include <thread>
#include <chrono>
/*int main2()
{
	try {
		std::clog << "Creating shared memory segment\n";
		trackd::TrackdControlShmBlock control_block(trackd::control_key, true);
		std::clog << "Segment mapped into memory\n";
		// Random generator
		std::random_device rand;
		// Uniform distribution to select random button/value
		std::uniform_int_distribution<unsigned> index_dist(0,31);
		// Distribution for generating random values for valuators
		std::uniform_real_distribution<float>   value_dist(-1.0f,1.0f);

		sig_handler::initialize();

		while (!sig_handler::finished()) {
			// Flip state of random button
			unsigned index = index_dist(rand);
			const uint32_t button = control_block.get_button(index);
			control_block.set_button(index, !button);

			// Set random value to random valuator
			index = index_dist(rand);
			control_block.set_value(index, value_dist(rand));

			std::this_thread::sleep_for(std::chrono::milliseconds(50));
		}
		std::clog << "Cleaning up\n";
	}
	catch(std::exception& e){
		std::clog << "Error: " << e.what() << "\n";
	}
}*/
