#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_62, _1)
{
    auto expect = 28;
    int m = 3;
    int n = 7;

    Solution S;
    auto result = S.uniquePaths(m, n);
    EXPECT_TRUE(result == expect);
}

TEST(_62, _2)
{
    auto expect = 3;
    int m = 3;
    int n = 2;

    Solution S;
    auto result = S.uniquePaths(m, n);
    EXPECT_TRUE(result == expect);
}
