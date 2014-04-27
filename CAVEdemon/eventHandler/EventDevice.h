/*!
 * @file 		EventDevice.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		5.3.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#ifndef EVENTDEVICE_H_
#define EVENTDEVICE_H_

#include "Event.h"
#include <string>
#include <map>
#include <set>
#include "linux/input.h"
#include <memory>

namespace event {



using supported_info_t = std::set<event_types>;
using abs_info_t = std::map<int, input_absinfo>;
using rel_info_t = std::set<int>;
using key_info_t = std::set<int>;


class EventDevice {
public:
	EventDevice(std::string path);
	~EventDevice() noexcept;

	/*!
	 * Waits for an event to come and returns a shared_ptr to a new event.
	 * If there's no event before timeout, empty shared pointer is returned.
	 * If an error occurs, std::runtime_error is thrown.
	 *
	 * @param timeout_ms Time to wait for events in milliseconds.
	 * @return shared pointer to Event structure on success, empty shared_ptr on failure.
	 */
	pEvent wait_for_event(int timeout_ms);


	// Getters to internal state
	/*!
	 * Gets device name
	 * @return
	 */
	const std::string& get_name() const { return name_; }
	/*!
	 * Returns a std::set containing supported event types.
	 * @return
	 */
	const supported_info_t& get_supported_info() const { return supported_info_; }
	/*!
	 * Returns a std::map containing supported absolute axis and their's parameters.
	 * @return
	 */
	const abs_info_t& get_supported_abs() const { return abs_info_; }
	/*!
	 * Returns a std::set containing supported codes of relative axis
	 * @return
	 */
	const rel_info_t& get_supported_rel() const { return rel_info_; }
	/*!
	 * Returns a std::set containing supported codes of keys
	 * @return
	 */
	const key_info_t& get_supported_key() const { return key_info_; }


private:
	std::string path_;
	std::string name_;
	int fd_;
	supported_info_t supported_info_;
	abs_info_t abs_info_;
	rel_info_t rel_info_;
	key_info_t key_info_;




};



}


#endif /* EVENTDEVICE_H_ */
