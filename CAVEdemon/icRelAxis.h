/* 
 * File:   icRelAxis.h
 * Author: marketa
 *
 * Created on 2. květen 2014, 16:02
 */

#ifndef ICRELAXIS_H
#define	ICRELAXIS_H

#include "ic.h"

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

