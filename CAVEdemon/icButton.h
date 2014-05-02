/* 
 * File:   icButton.h
 * Author: marketa
 *
 * Created on 2. květen 2014, 15:56
 */

#ifndef ICBUTTON_H
#define	ICBUTTON_H

#include "ic.h"

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

