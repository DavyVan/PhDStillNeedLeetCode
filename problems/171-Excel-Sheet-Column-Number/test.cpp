#include "kernel.h"
#include <gtest/gtest.h>

TEST(_171, _1)
{
    char *in = "A";
    int expect = 1;
    EXPECT_EQ(titleToNumber(in), expect);
}

TEST(_171, _2)
{
    char *in = "AB";
    int expect = 28;
    EXPECT_EQ(titleToNumber(in), expect);
}

TEST(_171, _3)
{
    char *in = "ZY";
    int expect = 701;
    EXPECT_EQ(titleToNumber(in), expect);
}