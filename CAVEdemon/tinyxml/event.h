/* 
 * File:   event.h
 * Author: Marketa
 *
 * Created on 17. duben 2014, 14:06
 */

#ifndef EVENT_H
#define	EVENT_H

#include <ctime>
#include <string>

using namespace std;
class event {
public:
    event();
    
    virtual ~event();

    const std::string type;
    const std::string deviceID;
    const std::string moduleID;
    const time_t timestamp;
private:

};

#endif	/* EVENT_H */

