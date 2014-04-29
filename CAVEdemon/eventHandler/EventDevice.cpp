/*!
 * @file 		EventDevice.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		5.3.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */

#include "EventDevice.h"


#include <sys/types.h>
#include <sys/stat.h>
#include <poll.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <algorithm>
#include <iostream>
#include "err_codes.h"


namespace event {

namespace {

/*!
 * Queries the device for it's name
 * @param fd
 * @return
 */
std::string get_device_name(int fd)
{
	// Prepare an array for the name.
	std::array<char, 256> name;
	if (ioctl(fd,EVIOCGNAME(256), name.data()) < 0) {
		throw_error("Failed to query device name", errno);
	}
	return name.data();
}


/*!
 * Queries the device for supported absolute axis and for parameters of each axis
 * @param fd
 * @return
 */
abs_info_t get_abs_info(int fd)
{
	abs_info_t info;
	std::array<unsigned char, ABS_MAX/8 + 1> k;
	std::fill(k.begin(), k.end(), 0);
	if(ioctl(fd,EVIOCGBIT(EV_ABS,sizeof(k)), k.data()) < 0) {
		throw_error("Failed to query supported abs. axis", errno);
	}
	for (unsigned int i=0;i<sizeof(k);++i) {
		for (int j=0;j<8;++j) {
			const size_t axis_id = 8*i+j;
			if (k[i]&(1<<j)) {
				input_absinfo absinfo;
				if (ioctl(fd,EVIOCGABS(axis_id),&absinfo) < 0 ) {
					throw_error("Failed to query details for axis " + std::to_string(axis_id), errno);
				}
				info.insert(std::make_pair(axis_id,absinfo));
			}
		}
	}



	return info;
}

/*!
 * Retrieves codes of supported buttons
 * @param fd File descriptor of opened event device
 * @return
 */
key_info_t get_key_info(int fd)
{
	key_info_t info;
	// Each button need a single bit in the array...
	std::array<unsigned char, KEY_MAX/8 + 1> k;
	// Initialy set all values to zero (no supported events)
	std::fill(k.begin(), k.end(), 0);
	if (ioctl(fd,EVIOCGBIT(EV_KEY,sizeof(k)), k.data()) < 0) {
		throw_error("Failed to query supported keys", errno);
	}
	for (unsigned int i=0;i<sizeof(k);++i) {
		for (int j=0;j<8;++j) {
			if (k[i]&(1<<j)) info.insert(8*i+j);
		}
	}

	return info;
}

rel_info_t get_rel_info(int fd)
{
	rel_info_t info;
	std::array<unsigned char, REL_MAX/8 +1> k;
	std::fill(k.begin(), k.end(), 0);
	if (ioctl(fd,EVIOCGBIT(EV_REL,sizeof(k)), k.data()) < 0) {
		throw_error("Failed to query supported rel. axis", errno);
	}
	for (unsigned int i=0;i<sizeof(k);++i) {
		for (int j=0;j<8;++j) {
			if (k[i]&(1<<j)) info.insert(8*i+j);
		}
	}

	return info;
}

std::map<int, event_types> event_mapping = {
		{EV_KEY, event_types::keys},
		{EV_ABS, event_types::absolute},
		{EV_REL, event_types::relative},
		{EV_SYN, event_types::sync},
		{EV_MSC, event_types::misc},
		{EV_FF,  event_types::force_feedback},
};

supported_info_t get_supported_events(int fd)
{
	unsigned long sup;
	if (ioctl(fd,EVIOCGBIT(0,sizeof(sup)), &sup) < 0) {
		throw_error("Failed to query supported event types", errno);
	}
	supported_info_t sup_events;
	for (const auto& it: event_mapping) {
		if (sup&(1<<it.first)) sup_events.insert(it.second);
	}
	return sup_events;
}
}

EventDevice::EventDevice(std::string path)
:path_(std::move(path))
{
	fd_ = open(path_.c_str(),O_RDONLY);
	if (fd_ < 0) {
		throw_error("Failed to open '" + path_+"'", errno);
	}

	name_ = get_device_name(fd_);
	std::cout << "--Initialized device '" << name_ << "'\n";
	supported_info_ = get_supported_events(fd_);

	if (supported_info_.count(event_types::keys)) {
		//std::cout << "Key supported\n";
		key_info_ = get_key_info(fd_);               
		//std::cout << "\tNumber of supported keys: " << key_info_.size() << "\n";
	}


	if (supported_info_.count(event_types::absolute)) {
		//std::cout << "Absolute axis supported\n";
		abs_info_ = get_abs_info(fd_);
		//std::cout << "\tFound " << abs_info_.size() << " valid axis\n";
	}
	if (supported_info_.count(event_types::relative)) {
		//std::cout << "Relative axis supported\n";               
		rel_info_ = get_rel_info(fd_);                
		//std::cout << "\tFound " << rel_info_.size() << " valid axis\n";
	}

	if (supported_info_.count(event_types::force_feedback)) {
		//std::cout << "Force feedback supported\n";
	}
}

EventDevice::~EventDevice() noexcept
{
}


pEvent EventDevice::wait_for_event(int timeout_ms)
{
	::pollfd pfd = {fd_, POLLIN, 0};
	int ret = ::poll(&pfd, 1, timeout_ms);

	if (ret < 0) { // Return value < 0 means an error has occurred...
		throw_error("Failed to poll events!", errno);
	}

	if (ret == 0) { // timeout
		return {};
	}

	::input_event event;
	ret = ::read(fd_, &event, sizeof(input_event));
	if (ret != sizeof(input_event)) {
		// Something's wrong, this should never happen...
		throw_error("Failed to read event data", errno);
	}

	auto it = event_mapping.find(event.type);
	if (it == event_mapping.end()) { // Unsupported event type
		return {};
	}

	return std::make_shared<Event>(it->second, event.time, event.code, event.value);
}


}

