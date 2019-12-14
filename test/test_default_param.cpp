//
// Created by 陈成 on 2019/12/14.
//

#include <gtest/gtest.h>
#include "cc_default_param.h"

TEST(test_default_param, no_assign_param_with_default_value) {
    EXPECT_EQ(add(1), 2);
}

TEST(test_default_param, assign_param_with_default_value) {
    EXPECT_EQ(add(1, 2), 3);
}
