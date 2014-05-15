/*!
 * @file 		signal_handler.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2014
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#ifndef SIGNAL_HANDLER_H_
#define SIGNAL_HANDLER_H_

namespace sig_handler {
/*!
 * Sets up signal handler for interrupt and terminate signals.
 */
void initialize();
/*!
 * Signal to end the application.
 * This function will be called from signal handler,
 * but can be used from client code as well, to signal the application should end.
 */
void destroy();
/*!
 * Checks if the appliaction has been requested to end.
 * @return true if @em destroy was called either from signal handler or from the application.
 */
bool finished();
}



#endif /* SIGNAL_HANDLER_H_ */
