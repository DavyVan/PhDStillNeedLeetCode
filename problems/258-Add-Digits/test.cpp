#include "kernel.h"
#include <gtest/gtest.h>

TEST(_258, _38)
{
    int num = 38;
    int expect = 2;
    EXPECT_EQ(addDigits(num), expect);
}

TEST(_258, _0)
{
    int num = 0;
    int expect = 0;
    EXPECT_EQ(addDigits(num), expect);
}