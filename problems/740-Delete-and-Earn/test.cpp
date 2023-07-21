#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_740, _1)
{
    auto expect = 6;
    vector<int> nums = {3, 4, 2};

    Solution S;
    auto result = S.deleteAndEarn(nums);
    EXPECT_TRUE(result == expect);
}

TEST(_740, _2)
{
    auto expect = 9;
    vector<int> nums = {2,2,3,3,3,4};

    Solution S;
    auto result = S.deleteAndEarn(nums);
    EXPECT_TRUE(result == expect);
}

TEST(_740, _3)
{
    auto expect = 61;
    vector<int> nums = {8,3,4,7,6,6,9,2,5,8,2,4,9,5,9,1,5,7,1,4};

    Solution S;
    auto result = S.deleteAndEarn(nums);
    EXPECT_TRUE(result == expect);
}

TEST(_740, _4)
{
    auto expect = 52;
    vector<int> nums = {8,7,3,8,1,4,10,10,10,2};

    Solution S;
    auto result = S.deleteAndEarn(nums);
    EXPECT_TRUE(result == expect);
}

TEST(_740, _5)
{
    auto expect = 138;
    vector<int> nums = {1,8,5,9,6,9,4,1,7,3,3,6,3,3,8,2,6,3,2,2,1,2,9,8,7,1,1,10,6,7,3,9,6,10,5,4,10,1,6,7,4,7,4,1,9,5,1,5,7,5};

    Solution S;
    auto result = S.deleteAndEarn(nums);
    EXPECT_TRUE(result == expect);
}