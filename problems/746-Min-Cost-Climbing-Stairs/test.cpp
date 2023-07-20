#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_746, _1)
{
    auto expect = 15;
    vector<int> cost = {10, 15, 20};

    Solution S;
    auto result = S.minCostClimbingStairs(cost);
    EXPECT_TRUE(result == expect);
}

TEST(_746, _2)
{
    auto expect = 6;
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};

    Solution S;
    auto result = S.minCostClimbingStairs(cost);
    EXPECT_TRUE(result == expect);
}

TEST(_746, _3)
{
    auto expect = 1;
    vector<int> cost = {1, 100};

    Solution S;
    auto result = S.minCostClimbingStairs(cost);
    EXPECT_TRUE(result == expect);
}