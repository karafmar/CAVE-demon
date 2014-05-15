/*!
 * @file 		trackd_common.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */
#include <array>
#include "shm_common.h"
#ifndef TRACKD_COMMON_H_
#define TRACKD_COMMON_H_

namespace trackd {

constexpr int control_key = 4127;

struct trackd_control_t {
	uint32_t version 		= 2;
	uint32_t but_offset 	= 40; 	// Size of header
	uint32_t val_offset 	= 168; 	// Size of header + size of buttons array
	uint32_t button_count 	= 0;	// Number of buttons
	uint32_t val_count 		= 0;	// Number of valuators
	uint32_t time[2] 		= {0,0};// Update time
	uint32_t command 		= 0;	// ???
	uint32_t button_count2 	= 0;	// The same value as button_count
	uint32_t val_count2 	= 0;	// The same value as val_count
	uint32_t buttons[32];			// Button states
	float	 vals[32];				// Valuator values
} __attribute__ ((packed));


class TrackdControlShmBlock: public shm::ShmBlock
{
public:
	TrackdControlShmBlock(int key = control_key, bool create = false);

	/*!
	 * Retrieves state of the button @em index.
	 * If @index is out of bound, the method throws std::out_of_range exception.
	 * @param index index of the button.
	 * @return The current state of the button
	 */
	uint32_t get_button(unsigned index) const;
	/*!
	 * Retrieves value of the valuator @em index.
	 * If @index is out of bound, the method throws std::out_of_range exception.
	 * @param index index of the valuator.
	 * @return The current value of the valuator
	 */
	float	 get_value (unsigned index) const;
	/*!
	 * Sets new state of the button @em index.
	 * If @index is out of bound, the method throws std::out_of_range exception.
	 * The method also updates time in the shared memory segment.
	 *
	 * @param index index of the button.
	 * @param value new state of the button.
	 */
	void	 set_button(unsigned index, uint32_t value);
	/*!
	 * Sets new value of the valuator @em index.
	 * If @index is out of bound, the method throws std::out_of_range exception.
	 * The method also updates time in the shared memory segment.
	 *
	 * @param index index of the valuator.
	 * @param value new value of the valuator.
	 */
	void	 set_value (unsigned index, float value);
	/*!
	 *	Updates time in shared memory to current time.
	 */
	void	 update_time();
	/*!
	 * Return current time as a par of seconds and microseconds
	 * @return Actual time in the shared memory block
	 */
	std::pair<uint32_t, uint32_t> get_time() const;
	/*!
	 * @return number of buttons
	 */
	uint32_t get_button_count() const;
        
	/*!
	 * @return number of valuators
	 */
	uint32_t get_value_count() const;
        
        /*!
         Sets number of buttons.
         */
        void set_button_count(uint32_t num);
	/*!
	 * Sets number of valuators.
	 */
	void set_value_count(uint32_t num);
        
        
        
private:
	volatile trackd_control_t* control_block_;
};

}

#endif /* TRACKD_COMMON_H_ */
