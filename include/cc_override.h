//
// Created by 陈成 on 2019/12/14.
//

#ifndef CPP_STUDY_CC_OVERRIDE_H
#define CPP_STUDY_CC_OVERRIDE_H

#include <iostream>
#include <string>

std::string
method1 (int a, double b);

std::string
method1 (double a, int b);

std::string
method0 (int a);

std::string
method0 (double a);

#endif //CPP_STUDY_CC_OVERRIDE_H
