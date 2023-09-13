#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_598, _1)
{
    auto expect = 4;
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {
        {2, 2},
        {3, 3}
    };

    Solution S;
    auto result = S.maxCount(m, n, ops);

    EXPECT_TRUE(result == expect);
}

TEST(_598, _2)
{
    auto expect = 4;
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {
        {2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3}
    };

    Solution S;
    auto result = S.maxCount(m, n, ops);

    EXPECT_TRUE(result == expect);
}

TEST(_598, _3)
{
    auto expect = 9;
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {};

    Solution S;
    auto result = S.maxCount(m, n, ops);

    EXPECT_TRUE(result == expect);
}

TEST(_598, _4)
{
    auto expect = 1;
    int m = 1;
    int n = 1;
    vector<vector<int>> ops = {{1, 1}};

    Solution S;
    auto result = S.maxCount(m, n, ops);

    EXPECT_TRUE(result == expect);
}