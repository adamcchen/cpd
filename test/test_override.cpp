//
// Created by 陈成 on 2019/12/13.
//

#include <gtest/gtest.h>
#include "cc_override.h"

TEST(test_override, same_func_name_but_param_type_diff) {
    auto a = int{0};
    auto b = double{0};

    EXPECT_EQ(method0(a), "int");
    EXPECT_EQ(method0(b), "double");
}

TEST(test_override, same_func_name_but_param_order_diff) {
    auto a = int{0};
    auto b = double{0};

    EXPECT_EQ(method1(a, b), "int and double");
    EXPECT_EQ(method1(b, a), "double and int");
}
