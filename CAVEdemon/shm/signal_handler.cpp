/*!
 * @file 		signal_handler.cpp
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2014
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */



#include "signal_handler.h"
#include <signal.h>
#include <algorithm>

namespace sig_handler {

namespace {
	bool finished_ = false;

	void sigHandler(int /* sig */, siginfo_t */*siginfo*/, void */*context*/)
	{
		destroy();
	}
}


void initialize()
{
	finished_ = false;

	struct sigaction act;
	std::fill_n(reinterpret_cast<char*>(&act),sizeof(act),0);
	act.sa_sigaction = &sigHandler;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGINT,&act,0);
	sigaction(SIGTERM,&act,0);
}

void destroy()
{
	finished_ = true;
	struct sigaction act;
	std::fill_n(reinterpret_cast<char*>(&act),sizeof(act),0);
	act.sa_handler = SIG_DFL;
	act.sa_flags &= ~SA_SIGINFO;
	sigaction(SIGINT,&act,0);
	sigaction(SIGTERM,&act,0);
}

bool finished() {
	return finished_;
}


}


