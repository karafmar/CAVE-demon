/*!
 * @file 		err_codes.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		5.3.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#ifndef ERR_CODES_H_
#define ERR_CODES_H_
#include <string>
namespace event {

void throw_error(std::string msg, int err);

}

#endif /* ERR_CODES_H_ */
