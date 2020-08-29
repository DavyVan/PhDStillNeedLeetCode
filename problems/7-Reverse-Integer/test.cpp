#include "kernel.h"
#include <gtest/gtest.h>

TEST(_7, _123)
{
    int in = 123;
    int out = reverse(in);
    EXPECT_EQ(out, 321);
}

TEST(_7, _negtive_123)
{
    int in = -123;
    int out = reverse(in);
    EXPECT_EQ(out, -321);
}

TEST(_7, _120)
{
    int in = 120;
    int out = reverse(in);
    EXPECT_EQ(out, 21);
}

TEST(_7, _negtive_2147483648)
{
    int in = -2147483648;
    int out = reverse(in);
    EXPECT_EQ(out, 0);
}