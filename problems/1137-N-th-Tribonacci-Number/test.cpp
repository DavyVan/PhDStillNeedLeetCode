#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_1137, _1)
{
    auto expect = 4;
    int n = 4;

    Solution S;
    auto result = S.tribonacci(n);
    EXPECT_TRUE(result == expect);
}

TEST(_1137, _2)
{
    auto expect = 1389537;
    int n = 25;

    Solution S;
    auto result = S.tribonacci(n);
    EXPECT_TRUE(result == expect);
}

TEST(_1137, _3)
{
    auto expect = 615693474;
    int n = 35;

    Solution S;
    auto result = S.tribonacci(n);
    EXPECT_TRUE(result == expect);
}
