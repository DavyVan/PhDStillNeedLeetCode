#include "kernel.h"
#include <gtest/gtest.h>

TEST(_204, _10)
{
    int n = 10;
    int expect = 4;
    EXPECT_EQ(countPrimes(n), expect);
}

TEST(_204, _1)
{
    int n = 1;
    int expect = 0;
    EXPECT_EQ(countPrimes(n), expect);
}

TEST(_204, _0)
{
    int n = 0;
    int expect = 0;
    EXPECT_EQ(countPrimes(n), expect);
}