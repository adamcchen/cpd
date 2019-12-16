//
// Created by 陈成 on 2019/12/16.
//

#ifndef CPP_STUDY_CC_INLINE_H
#define CPP_STUDY_CC_INLINE_H

inline int
min(int a, int b);

inline int
max(int a, int b) {
    return a > b || a == b ? a : b;
}

inline int
min(int a, int b) {
    return a < b || a == b ? a : b;
}

#endif //CPP_STUDY_CC_INLINE_H
