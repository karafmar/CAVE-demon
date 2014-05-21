/*!@file   main.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#include "core.h"
#include <signal.h>
using namespace std;

std::shared_ptr<core> mcp ;


void endEverything(int signal){
    mcp->end(signal);
}


/**
 * main
 */
int main(int argc, char** argv) {

    mcp = std::shared_ptr<core>(new core);   
    signal(SIGINT, endEverything);
    signal(SIGTERM, endEverything);
    mcp->run();
    
    cout << "Program will now end.";
    return 0;
}


