#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_300, _1)
{
    auto expect = 4;
    vector<int> candytype = {10,9,2,5,3,7,101,18};

    Solution S;
    auto result = S.lengthOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_300, _2)
{
    auto expect = 4;
    vector<int> candytype = {0,1,0,3,2,3};

    Solution S;
    auto result = S.lengthOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_300, _3)
{
    auto expect = 1;
    vector<int> candytype = {7,7,7,7,7,7,7};

    Solution S;
    auto result = S.lengthOfLIS(candytype);

    EXPECT_TRUE(result == expect);
}
