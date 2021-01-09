#include "kernel.h"
#include <gtest/gtest.h>

TEST(_374, _1)
{
    int n = 10;
    int pick = 6;
    target_num = pick;
    EXPECT_EQ(guessNumber(n), pick);
}

TEST(_374, _2)
{
    int n = 1;
    int pick = 1;
    target_num = pick;
    EXPECT_EQ(guessNumber(n), pick);
}

TEST(_374, _3)
{
    int n = 2;
    int pick = 1;
    target_num = pick;
    EXPECT_EQ(guessNumber(n), pick);
}

TEST(_374, _4)
{
    int n = 2;
    int pick = 2;
    target_num = pick;
    EXPECT_EQ(guessNumber(n), pick);
}

TEST(_374, overflow)
{
    int n = 2126753390;
    int pick = 1702766719;
    target_num = pick;
    EXPECT_EQ(guessNumber(n), pick);
}