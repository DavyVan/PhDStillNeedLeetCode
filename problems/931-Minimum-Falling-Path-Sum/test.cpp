#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_931, _1)
{
    auto expect = 13;
    vector<vector<int>> matrix = {
        {2, 1, 3},
        {6, 5, 4},
        {7, 8, 9}
    };

    Solution S;
    auto result = S.minFallingPathSum(matrix);
    EXPECT_TRUE(result == expect);
}

TEST(_931, _2)
{
    auto expect = -59;
    vector<vector<int>> matrix = {
        {-19, 57},
        {-40, -5}
    };

    Solution S;
    auto result = S.minFallingPathSum(matrix);
    EXPECT_TRUE(result == expect);
}
