#include "kernel.h"
#include <gtest/gtest.h>

TEST(_509, _1)
{
    auto expect = 1;
    int num = 2;

    Solution S;
    auto result = S.fib(num);
    EXPECT_TRUE(result == expect);
}

TEST(_509, _2)
{
    auto expect = 2;
    int num = 3;

    Solution S;
    auto result = S.fib(num);
    EXPECT_TRUE(result == expect);
}

TEST(_509, _3)
{
    auto expect = 3;
    int num = 4;

    Solution S;
    auto result = S.fib(num);
    EXPECT_TRUE(result == expect);
}