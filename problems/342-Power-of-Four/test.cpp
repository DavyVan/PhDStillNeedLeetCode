#include "kernel.h"
#include <gtest/gtest.h>

TEST(_342, _1)
{
    int n = 1;
    bool expect = true;
    EXPECT_EQ(isPowerOfFour(n), expect);
}

TEST(_342, _5)
{
    int n = 5;
    bool expect = false;
    EXPECT_EQ(isPowerOfFour(n), expect);
}

TEST(_342, _16)
{
    int n = 16;
    bool expect = true;
    EXPECT_EQ(isPowerOfFour(n), expect);
}