/* 
 * File:   icButton.cpp
 * Author: marketa
 * 
 * Created on 2. květen 2014, 15:56
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