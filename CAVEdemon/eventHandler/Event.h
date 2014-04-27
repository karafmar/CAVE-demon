/*!
 * @file 		Event.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		24.4.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#ifndef EVENT_H_
#define EVENT_H_
#include <memory>
#include <string>

namespace event {

enum class event_types {
	keys,
	absolute,
	relative,
	sync,
	misc,
	force_feedback
};

std::string get_event_name(event_types type);

struct Event {
	Event(event_types type, timeval time, uint16_t code, int32_t value):
		type(type),time(time),code(code),value(value) {}
	~Event() noexcept {}
	event_types type;
	timeval time;
	uint16_t code;
	int32_t value;
};

using pEvent = std::shared_ptr<Event>;


std::ostream& operator<<(std::ostream& os, const pEvent& event);


}


#endif /* EVENT_H_ */
