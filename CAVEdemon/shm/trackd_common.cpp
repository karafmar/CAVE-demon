/*!
 * @file 		trackd_common.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#include "trackd_common.h"
#include <sys/time.h>
#include <iostream>
namespace trackd {

    TrackdControlShmBlock::TrackdControlShmBlock(int key, bool create)
    : ShmBlock(key, sizeof (trackd_control_t), create) {
        static_assert(sizeof (trackd_control_t) == 296, "Wrong size of control structure");
        control_block_ = reinterpret_cast<volatile trackd_control_t*> (data_ptr());
        if (!control_block_) throw std::runtime_error("X");
        // Set to max possible number of buttons and values
        control_block_->button_count = 32;
        control_block_->val_count = 32;
        control_block_->button_count2 = 32;
        control_block_->val_count2 = 32;
        update_time();
    }

    uint32_t TrackdControlShmBlock::get_button(unsigned index) const {
        if (index >= control_block_->button_count) {
            throw std::out_of_range("Index out of range");
        }
        return control_block_->buttons[index];
    }

    float TrackdControlShmBlock::get_value(unsigned index) const {
        if (index >= control_block_->val_count) {
            throw std::out_of_range("Index out of range");
        }
        return control_block_->vals[index];
    }

    void TrackdControlShmBlock::set_button(unsigned index, uint32_t value) {
        if (index >= control_block_->button_count) {
            throw std::out_of_range("Index out of range");
        }
        control_block_->buttons[index] = value;
        update_time();
    }

    void TrackdControlShmBlock::set_value(unsigned index, float value) {
        if (index >= control_block_->val_count) {
            throw std::out_of_range("Index out of range");
        }
        control_block_->vals[index] = value;
        update_time();
    }

    void TrackdControlShmBlock::update_time() {
        timeval current_time;
        // Using gettimeofday instead of std::chrono, at it's easier to get data in required format this way
        gettimeofday(&current_time, nullptr);
        control_block_->time[0] = current_time.tv_sec;
        control_block_->time[1] = current_time.tv_usec;
    }

    std::pair<uint32_t, uint32_t> TrackdControlShmBlock::get_time() const {
        return std::make_pair(control_block_->time[0], control_block_->time[1]);
    }

    uint32_t TrackdControlShmBlock::get_button_count() const {
        return control_block_->button_count;
    }

    uint32_t TrackdControlShmBlock::get_value_count() const {
        return control_block_->val_count;
    }

    void TrackdControlShmBlock::set_button_count(uint32_t num) {
        control_block_->button_count =num;
        control_block_->button_count2 =num;
    }

    void TrackdControlShmBlock::set_value_count(uint32_t num) {
        control_block_->val_count=num;
        control_block_->val_count2=num;
    }


}


