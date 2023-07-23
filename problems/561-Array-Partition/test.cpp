#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_561, _1)
{
    auto expect = 4;
    vector<int> nums = {1, 4, 3, 2};

    Solution S;
    auto result = S.arrayPairSum(nums);
    EXPECT_TRUE(result == expect);
}

TEST(_561, _2)
{
    auto expect = 9;
    vector<int> nums = {6, 2, 6, 5, 1, 2};

    Solution S;
    auto result = S.arrayPairSum(nums);
    EXPECT_TRUE(result == expect);
}
