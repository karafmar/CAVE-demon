/*!
 * @file   ic.h
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#ifndef ICBUTTON_H
#define	ICBUTTON_H

#include "ic.h"
/** Class represents input type button.
 */
class icButton  : public ic{
public:
    icButton();
    icButton(int newcode, std::string newname);
    virtual ~icButton();
    std::string getName();
    int getCode();
    inputType getType();
    void setName(std::string n);
    void setCode(int c);

private:
    std::string name;
    int code;
};

#endif	/* ICBUTTON_H */

