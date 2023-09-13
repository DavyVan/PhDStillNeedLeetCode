#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_673, _1)
{
    auto expect = 2;
    vector<int> candytype = {1,3,5,4,7};

    Solution S;
    auto result = S.findNumberOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_673, _2)
{
    auto expect = 5;
    vector<int> candytype = {2,2,2,2,2};

    Solution S;
    auto result = S.findNumberOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_673, _3)
{
    auto expect = 10;
    vector<int> candytype = {1,1,2,2,2,2,2};

    Solution S;
    auto result = S.findNumberOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}
