#include "kernel.h"
#include <gtest/gtest.h>

TEST(_172, _0)
{
    int n = 0;
    int expect = 0;
    EXPECT_EQ(trailingZeroes(n), expect);
}

TEST(_172, _3)
{
    int n = 3;
    int expect = 0;
    EXPECT_EQ(trailingZeroes(n), expect);
}

TEST(_172, _5)
{
    int n = 5;
    int expect = 1;
    EXPECT_EQ(trailingZeroes(n), expect);
}

TEST(_172, _25)
{
    int n = 25;
    int expect = 6;
    EXPECT_EQ(trailingZeroes(n), expect);
}