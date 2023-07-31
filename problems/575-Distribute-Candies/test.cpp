#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_575, _1)
{
    auto expect = 3;
    vector<int> candytype = {1, 1, 2, 2, 3, 3};

    Solution S;
    auto result = S.distributeCandies(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_575, _2)
{
    auto expect = 2;
    vector<int> candytype = {1, 1, 2, 3};

    Solution S;
    auto result = S.distributeCandies(candytype);

    EXPECT_TRUE(result == expect);
}

TEST(_575, _3)
{
    auto expect = 1;
    vector<int> candytype = {6, 6, 6, 6};

    Solution S;
    auto result = S.distributeCandies(candytype);

    EXPECT_TRUE(result == expect);
}