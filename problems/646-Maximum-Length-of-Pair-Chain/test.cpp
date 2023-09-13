#include "kernel.h"
#include <gtest/gtest.h>
// #include <sstream>
// #include <algorithm>

TEST(_646, _1)
{
    auto expect = 2;
    vector<vector<int>> pairs = {
        {1,2},
        {2,3},
        {3,4}
    };

    Solution S;
    auto result = S.findLongestChain(pairs);

    EXPECT_TRUE(result == expect);
}

TEST(_646, _2)
{
    auto expect = 3;
    vector<vector<int>> pairs = {
        {1,2},
        {7,8},
        {4,5}
    };

    Solution S;
    auto result = S.findLongestChain(pairs);

    EXPECT_TRUE(result == expect);
}
