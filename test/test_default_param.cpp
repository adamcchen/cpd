//
// Created by 陈成 on 2019/12/14.
//

#include <gtest/gtest.h>
#include "cc_default_param.h"

TEST(test_default_param, param_with_default_value_should_stay_right) {
    EXPECT_EQ(add(1), 2);
}
