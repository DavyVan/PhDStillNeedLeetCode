#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_120, _1)
{
    auto expect = 11;
    vector<vector<int>> grid = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };

    Solution S;
    auto result = S.minimumTotal(grid);
    EXPECT_TRUE(result == expect);
}

TEST(_120, _2)
{
    auto expect = -10;
    vector<vector<int>> grid = {
        {-10}
    };

    Solution S;
    auto result = S.minimumTotal(grid);
    EXPECT_TRUE(result == expect);
}
