/*!
 * @file 		Event.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		24.4.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */
#include "Event.h"
#include <map>
#include <iostream>
namespace event {
namespace {
std::map<event_types, std::string> event_type_names= {
		{event_types::keys, "KEY"},
		{event_types::absolute, "ABSOLUTE AXIS"},
		{event_types::relative, "RELATIVE AXIS"},
		{event_types::sync, "SYNCHRONIZATION"},
		{event_types::misc, "MISC"},
		{event_types::force_feedback, "FORCE FEEDBACK"}
};


}


std::string get_event_name(event_types type)
{
	auto it = event_type_names.find(type);
	if (it == event_type_names.end()) {
		return "UNKNOWN";
	}
	return it->second;
}


std::ostream& operator<<(std::ostream& os, const pEvent& event)
{
	if (!event) return os;
	os << get_event_name(event->type);
	switch (event->type) {
		case event_types::keys: os << ", key: " << event->code << ", state: " << event->value; break;
		case event_types::absolute: os << ", axis: " << event->code << ", value: " << event->value; break;
		case event_types::relative: os << ", axis " << event->code << ", change: " << event->value; break;
		case event_types::misc:
		case event_types::sync:
		default:break;
	}
	return os;
}


}

