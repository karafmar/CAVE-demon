/* 
 * File:   icAbsAxis.cpp
 * Author: marketa
 * 
 * Created on 2. květen 2014, 16:05
 */

#include "icAbsAxis.h"

icAbsAxis::icAbsAxis() {
}

icAbsAxis::icAbsAxis(int newcode, std::string newname, int newmin, int newmax, int newfuzz, int newflat, int newres) {
    name = newname;
    code = newcode;
    min = newmin;
    max = newmax;
    fuzz = newfuzz;
    flat = newflat;
    res = newres;
}

icAbsAxis::~icAbsAxis() {
}

std::string icAbsAxis::getName(){
    return name;
}

int icAbsAxis::getCode() {
    return code;
}

inputType icAbsAxis::getType() {
    return inputType::ABS_AXIS;
}

void icAbsAxis::setName(std::string n) {
    name = n;
}

void icAbsAxis::setCode(int c) {
    code = c;
}

int icAbsAxis::getMin() {
    return min;
}

int icAbsAxis::getMax() {
    return max;
}

int icAbsAxis::getFuzz() {
    return fuzz;
}

int icAbsAxis::getFlat() {
    return flat;
}

int icAbsAxis::getRes() {
    return res;
}

void icAbsAxis::setMin(int m) {
    min = m;
}

void icAbsAxis::setMax(int m) {
    max = m;
}

void icAbsAxis::setFuzz(int f) {
    fuzz = f;
}

void icAbsAxis::setFlat(int f) {
    flat = f;
}

void icAbsAxis::setRes(int r) {
    res = r;
}