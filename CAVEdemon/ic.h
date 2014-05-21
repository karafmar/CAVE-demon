/*!
 * @file   ic.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef IC_H
#define	IC_H

#include "inputType.h"
#include <string>
/**
 * Virtual class, all input components has to be children of this class.
 */
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

