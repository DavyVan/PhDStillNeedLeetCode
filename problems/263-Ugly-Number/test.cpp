#include "kernel.h"
#include <gtest/gtest.h>

TEST(_263, _1)
{
    int num = 6;
    bool expect = true;
    EXPECT_EQ(isUgly(num), expect);
}

TEST(_263, _2)
{
    int num = 8;
    bool expect = true;
    EXPECT_EQ(isUgly(num), expect);
}

TEST(_263, _3)
{
    int num = 14;
    bool expect = false;
    EXPECT_EQ(isUgly(num), expect);
}