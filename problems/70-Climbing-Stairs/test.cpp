#include "kernel.h"
#include <gtest/gtest.h>

TEST(_70, recursive_2)
{
    int n = 2;
    int expect = 2;
    EXPECT_EQ(climbStairs_recursive(n), expect);
}

TEST(_70, recursive_3)
{
    int n = 3;
    int expect = 3;
    EXPECT_EQ(climbStairs_recursive(n), expect);
}

TEST(_70, dp_fibonacci_2)
{
    int n = 2;
    int expect = 2;
    EXPECT_EQ(climbStairs_recursive(n), expect);
}

TEST(_70, dp_fibonacci_3)
{
    int n = 3;
    int expect = 3;
    EXPECT_EQ(climbStairs_recursive(n), expect);
}

TEST(_70, dp_fibonacci_37)
{
    int n = 37;
    int expect = 39088169;
    EXPECT_EQ(climbStairs_recursive(n), expect);
}