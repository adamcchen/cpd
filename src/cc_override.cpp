//
// Created by 陈成 on 2019/12/14.
//

#include "cc_override.h"

std::string
method0(int a) {
    return "int";
}

std::string
method0(double a) {
    return "double";
}

std::string method1(int a, double b) {
    return std::string("int and double");
}

std::string method1(double a, int b) {
    return std::string("double and int");
}
