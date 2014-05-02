/* 
 * File:   icRelAxis.cpp
 * Author: marketa
 * 
 * Created on 2. květen 2014, 16:02
 */

#include "icRelAxis.h"
#include "inputType.h"

icRelAxis::icRelAxis() {
}

icRelAxis::icRelAxis(int newcode, std::string newname) {
    code = newcode;
    name =newname;
}

icRelAxis::~icRelAxis() {
}

std::string icRelAxis::getName() {
    return name;
}

int icRelAxis::getCode() {
    return code;
}

inputType icRelAxis::getType() {
    return inputType::REL_AXIS;
}

void icRelAxis::setName(std::string n) {
    name = n;
}

void icRelAxis::setCode(int c) {
    code = c;
}