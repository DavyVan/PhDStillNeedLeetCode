#include "kernel.h"
#include <gtest/gtest.h>

TEST(_9, _121)
{
    int in = 121;
    EXPECT_EQ(isPalindrome(in), true);
}

TEST(_9, _negative_121)
{
    int in = -121;
    EXPECT_EQ(isPalindrome(in), false);
}

TEST(_9, _10)
{
    int in = 10;
    EXPECT_EQ(isPalindrome(in), false);
}

TEST(_9, _11)
{
    int in = 11;
    EXPECT_EQ(isPalindrome(in), true);
}