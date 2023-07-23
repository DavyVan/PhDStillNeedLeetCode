#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_63, _1)
{
    auto expect = 2;
    vector<vector<int>> grid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    Solution S;
    auto result = S.uniquePathsWithObstacles(grid);
    EXPECT_TRUE(result == expect);
}

TEST(_63, _2)
{
    auto expect = 1;
    vector<vector<int>> grid = {
        {0, 1},
        {0, 0}
    };

    Solution S;
    auto result = S.uniquePathsWithObstacles(grid);
    EXPECT_TRUE(result == expect);
}

TEST(_63, _3)
{
    auto expect = 0;
    vector<vector<int>> grid = {
        {0, 0},
        {0, 1}
    };

    Solution S;
    auto result = S.uniquePathsWithObstacles(grid);
    EXPECT_TRUE(result == expect);
}