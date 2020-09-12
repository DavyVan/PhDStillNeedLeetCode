#include "kernel.h"
#include <gtest/gtest.h>

TEST(_69, _4)
{
    int in = 4;
    int expect = 2;
    EXPECT_EQ(mySqrt(in), expect);
}

TEST(_69, _8)
{
    int in = 8;
    int expect = 2;
    EXPECT_EQ(mySqrt(in), expect);
}

TEST(_69, _2147395599)
{
    int in = 2147395599;
    int expect = 46339;
    EXPECT_EQ(mySqrt(in), expect);
}