//
// Created by 陈成 on 2019/12/14.
//

#include "cc_default_param.h"

int
add(int a, int b) {
    return a + b;
}

#if 0 // don't
int
add(int a, int b = 1) {
    return a + b;
}
#endif
