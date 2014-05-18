/*!
 * @file   ic.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	Institute of Intermedia, CTU in Prague, 2013
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 */

#ifndef ICRELAXIS_H
#define	ICRELAXIS_H

#include "ic.h"
/** Class represents input type relative axis.
 */
class icRelAxis : public ic {
public:
    icRelAxis();
    virtual ~icRelAxis();
    icRelAxis(int newcode, std::string newname);
    std::string getName();
    int getCode();
    inputType getType();
    void setName(std::string n);
    void setCode(int c);

private:
    std::string name;
    int code;

};

#endif	/* ICRELAXIS_H */

