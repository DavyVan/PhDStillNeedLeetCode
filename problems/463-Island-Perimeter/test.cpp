#include "kernel.h"
#include <gtest/gtest.h>

TEST(_463, _1)
{
    auto expect = 16;
    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};

    Solution S;
    auto result = S.islandPerimeter(grid);

    EXPECT_EQ(result, expect);
}

TEST(_463, _2)
{
    auto expect = 4;
    vector<vector<int>> grid = {{1}};

    Solution S;
    auto result = S.islandPerimeter(grid);

    EXPECT_EQ(result, expect);
}

TEST(_463, _3)
{
    auto expect = 4;
    vector<vector<int>> grid = {{1, 0}};

    Solution S;
    auto result = S.islandPerimeter(grid);

    EXPECT_EQ(result, expect);
}
