/* 
 * File:   icAbsAxis.h
 * Author: marketa
 *
 * Created on 2. květen 2014, 16:05
 */

#ifndef ICABSAXIS_H
#define	ICABSAXIS_H

#include "ic.h"

class icAbsAxis : public ic {
public:
    icAbsAxis();
    icAbsAxis(int newcode, std::string newname, int newmin, int newmax, int newfuzz, int newflat, int newres);
    virtual ~icAbsAxis();
    std::string getName();
    int getCode();
    inputType getType();
    void setName(std::string n);
    void setCode(int c);
    int getMin();
    int getMax();
    int getFuzz();
    int getFlat();
    int getRes();
    void setMin(int m);
    void setMax(int m);
    void setFuzz(int f);
    void setFlat(int f);
    void setRes(int r);

private:
    std::string name;
    int code;
    int min;
    int max;
    int fuzz;
    int flat;
    int res;
};

#endif	/* ICABSAXIS_H */

