/*
 * File:   main.cpp
 * Author: Marketa
 *
 * Created on 10. duben 2014, 15:34
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


