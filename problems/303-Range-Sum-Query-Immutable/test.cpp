#include "kernel.h"
#include <gtest/gtest.h>

TEST(_303, _1)
{
    vector<int> nums{-2, 0, 3, -5, 2, -1};
    NumArray na(nums);
    EXPECT_EQ(na.sumRange(0, 2), 1);
    EXPECT_EQ(na.sumRange(2, 5), -1);
    EXPECT_EQ(na.sumRange(0, 5), -3);
}