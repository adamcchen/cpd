//
// Created by 陈成 on 2019/12/16.
//

#include <gtest/gtest.h>
#include "cc_inline.h"

TEST(test_inline, declare_and_definition_inline_func_together) {
    EXPECT_EQ(max(1, 2), 2);
}

TEST(test_inline, declare_and_definition_inline_func_seperate) {
    EXPECT_EQ(min(1, 2), 1);
}
