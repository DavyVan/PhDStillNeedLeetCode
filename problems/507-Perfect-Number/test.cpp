#include "kernel.h"
#include <gtest/gtest.h>

TEST(_507, _1)
{
    auto expect = true;
    int num = 28;

    Solution S;
    auto result = S.checkPerfectNumber(num);

    EXPECT_TRUE(result == expect);
}

TEST(_507, _2)
{
    auto expect = false;
    int num = 7;

    Solution S;
    auto result = S.checkPerfectNumber(num);

    EXPECT_TRUE(result == expect);
}
