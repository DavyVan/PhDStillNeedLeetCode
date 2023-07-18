#include "kernel.h"
#include <gtest/gtest.h>

TEST(_504, _1)
{
    auto expect = "202";
    int num = 100;

    Solution S;
    auto result = S.convertToBase7(num);

    EXPECT_TRUE(result == expect);
}

TEST(_504, _2)
{
    auto expect = "-10";
    int num = -7;

    Solution S;
    auto result = S.convertToBase7(num);

    EXPECT_TRUE(result == expect);
}

TEST(_504, _3)
{
    auto expect = "-11";
    int num = -8;

    Solution S;
    auto result = S.convertToBase7(num);

    EXPECT_TRUE(result == expect);
}
