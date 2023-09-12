#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_594, _1)
{
    auto expect = 5;
    vector<int> candytype = {1,3,2,2,5,2,3,7};

    Solution S;
    auto result = S.findLHS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_594, _2)
{
    auto expect = 2;
    vector<int> candytype = {1,2,3,4};

    Solution S;
    auto result = S.findLHS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_594, _3)
{
    auto expect = 0;
    vector<int> candytype = {1,1,1,1};

    Solution S;
    auto result = S.findLHS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_594, _4)
{
    auto expect = 4;
    vector<int> candytype = {1,2,2,1};

    Solution S;
    auto result = S.findLHS(candytype);

    EXPECT_TRUE(result == expect);
}