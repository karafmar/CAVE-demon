
/*!@file     icButton.cpp
 * @author: Marketa Karaffova <karafmar@cvut.cz>
 * @date 22. 4. 2014	
 * @copyright	 Marketa Karaffova 2014
 * 	Distributed under MIT Licence, details in file doc/licence.txt
 */

#include "icButton.h"

icButton::icButton() {
}

icButton::icButton(int newcode, std::string newname) {
    code = newcode;
    name =newname;
}

icButton::~icButton() {
}

std::string icButton::getName() {
    return name;
}

int icButton::getCode() {
    return code;
}

inputType icButton::getType() {
    return inputType::BUTTON;
}

void icButton::setName(std::string n) {
    name = n;
}

void icButton::setCode(int c) {
    code = c;
}