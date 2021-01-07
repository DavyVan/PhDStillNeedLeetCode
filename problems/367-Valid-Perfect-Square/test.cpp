#include "kernel.h"
#include <gtest/gtest.h>

TEST(_367, _0)
{
    int num = 0;
    bool expect = true;
    EXPECT_EQ(isPerfectSquare(num), expect);
}

TEST(_367, _1)
{
    int num = 1;
    bool expect = true;
    EXPECT_EQ(isPerfectSquare(num), expect);
}

TEST(_367, _16)
{
    int num = 16;
    bool expect = true;
    EXPECT_EQ(isPerfectSquare(num), expect);
}

TEST(_367, _14)
{
    int num = 14;
    bool expect = false;
    EXPECT_EQ(isPerfectSquare(num), expect);
}