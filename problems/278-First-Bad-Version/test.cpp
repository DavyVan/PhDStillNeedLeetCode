#include "kernel.h"
#include <gtest/gtest.h>

TEST(_278, _1)
{
    int n = 5;
    bad = 4;
    int expect = bad;
    EXPECT_EQ(firstBadVersion(n), expect);
}

TEST(_278, _2)
{
    int n = 1;
    bad = 1;
    int expect = bad;
    EXPECT_EQ(firstBadVersion(n), expect);
}

TEST(_278, _3)
{
    int n = 2;
    bad = 1;
    int expect = bad;
    EXPECT_EQ(firstBadVersion(n), expect);
}

TEST(_278, _4)
{
    int n = 2126753390;
    bad = 1702766719;
    int expect = bad;
    EXPECT_EQ(firstBadVersion(n), expect);
}