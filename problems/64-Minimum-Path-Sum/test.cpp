#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_64, _1)
{
    auto expect = 7;
    vector<vector<int>> grid = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };

    Solution S;
    auto result = S.minPathSum(grid);
    EXPECT_TRUE(result == expect);
}

TEST(_64, _2)
{
    auto expect = 12;
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6}
    };

    Solution S;
    auto result = S.minPathSum(grid);
    EXPECT_TRUE(result == expect);
}
