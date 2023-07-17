#include "kernel.h"
#include <gtest/gtest.h>

TEST(_485, _1)
{
    auto expect = 3;
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution S;
    auto result = S.findMaxConsecutiveOnes(nums);

    EXPECT_TRUE(result == expect);
}

TEST(_485, _2)
{
    auto expect = 2;
    vector<int> nums = {1, 0, 1, 1, 0, 1};

    Solution S;
    auto result = S.findMaxConsecutiveOnes(nums);

    EXPECT_TRUE(result == expect);
}
