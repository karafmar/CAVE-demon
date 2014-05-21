
/*!@file    icRelAxis.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
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