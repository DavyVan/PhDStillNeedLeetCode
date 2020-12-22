#include "kernel.h"
#include <gtest/gtest.h>

TEST(_326, _0)
{
    int n = 0;
    bool expect = false;
    EXPECT_EQ(isPowerOfThree(n), expect);
}

TEST(_326, _9)
{
    int n = 9;
    bool expect = true;
    EXPECT_EQ(isPowerOfThree(n), expect);
}

TEST(_326, _27)
{
    int n = 27;
    bool expect = true;
    EXPECT_EQ(isPowerOfThree(n), expect);
}

TEST(_326, _45)
{
    int n = 45;
    bool expect = false;
    EXPECT_EQ(isPowerOfThree(n), expect);
}