#include "kernel.h"
#include <gtest/gtest.h>

TEST(_461, _1)
{
    auto expect = 2;
    int x = 1;
    int y = 4;

    Solution S;
    auto result = S.hammingDistance(x, y);

    EXPECT_EQ(result, expect);
}

TEST(_461, _2)
{
    auto expect = 1;
    int x = 3;
    int y = 1;

    Solution S;
    auto result = S.hammingDistance(x, y);

    EXPECT_EQ(result, expect);
}
