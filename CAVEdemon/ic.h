/* 
 * File:   ic.h
 * Author: marketa
 *
 * Created on 2. květen 2014, 15:49
 */

#ifndef IC_H
#define	IC_H

#include "inputType.h"
#include <string>

class ic {
public:
    ic();
    virtual ~ic();
    virtual std::string getName()=0 ;
    virtual int getCode()=0;
    virtual inputType getType()=0;
  
private:
    std::string name;
    int code;
    inputType type;
};

#endif	/* IC_H */

