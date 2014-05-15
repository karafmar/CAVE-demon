/*!
 * @file 		shm_common.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */

#include "shm_common.h"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <cstring>
#include <stdexcept>
namespace shm {

ShmBlock::ShmBlock(int key, int size, bool create)
:handle_(-1),data_(nullptr),created_(create)
{
	int mode = 0;
	if (create) {
		mode = 0666|IPC_CREAT;
	}
	if ((handle_ = shmget(key, size, mode)) < 0) {
		throw std::runtime_error("Failed to get shared segment!");
	}
	data_ = shmat(handle_, 0, 0);
	if (!data_) {
		throw std::runtime_error("Failed to map shared segment!");
	}
	if (data_ == (void*)(-1)) {
		throw std::runtime_error("Failed to map shared segment, error: "+std::to_string(errno)+" ("+strerror(errno)+")");
	}
}

ShmBlock::~ShmBlock() noexcept
{
	// Using const_cast to cast away 'volatile'
	if (data_) shmdt(const_cast<const void*>(data_));
	if (created_) {
		if (shmctl(handle_,IPC_RMID,0) == -1) {
			// Ignoring errors here, the constructor shall not throw.
		}
	}
}


volatile void* ShmBlock::data_ptr()
{
	return data_;
}

const volatile void* ShmBlock::data_ptr() const
{
	return data_;
}

}





