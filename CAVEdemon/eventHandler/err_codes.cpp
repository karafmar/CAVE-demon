/*!
 * @file 		err_codes.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		5.3.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */

#include "err_codes.h"
#include <stdexcept>
#include <map>
#include <errno.h>


namespace event {
std::map<int, std::string> err_codes = {
		{EPERM, "Operation not permitted"},
		{ENOENT, "No such file or directory"},
		{ESRCH, "No such process"},
		{EINTR, "Interrupted system call"},
		{EIO, "I/O error"},
		{ENXIO, "No such device or address"},
		{E2BIG, "Argument list too long"},
		{ENOEXEC, "Exec format error"},
		{EBADF, "Bad file number"},
		{ECHILD, "No child processes"},
		{EAGAIN, "Try again"},
		{ENOMEM, "Out of memory"},
		{EACCES, "Permission denied"},
		{EFAULT, "Bad address"},
		{ENOTBLK, "Block device required"},
		{EBUSY, "Device or resource busy"},
		{EEXIST, "File exists"},
		{EXDEV, "Cross-device link"},
		{ENODEV, "No such device"},
		{ENOTDIR, "Not a directory"},
		{EISDIR, "Is a directory"},
		{EINVAL, "Invalid argument"},
		{ENFILE, "File table overflow"},
		{EMFILE, "Too many open files"},
		{ENOTTY, "Not a typewriter"},
		{ETXTBSY, "Text file busy"},
		{EFBIG, "File too large"},
		{ENOSPC, "No space left on device"},
		{ESPIPE, "Illegal seek"},
		{EROFS, "Read-only file system"},
		{EMLINK, "Too many links"},
		{EPIPE, "Broken pipe"},
		{EDOM, "Math argument out of domain of func"},
		{ERANGE, "Math result not representable"},
};

	void throw_error(std::string msg, int err)
	{
		auto it = err_codes.find(err);
		if (it != err_codes.end()) {
			throw std::runtime_error(msg+": " + it->second);
		}
		throw std::runtime_error(msg+": Unknown error");
	}

}
