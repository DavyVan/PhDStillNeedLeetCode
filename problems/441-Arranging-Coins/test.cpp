#include "kernel.h"
#include <gtest/gtest.h>

TEST(_441, _1)
{
    int expect = 2;
    int input = 5;

    Solution s;
    int result = s.arrangeCoins(input);

    EXPECT_EQ(result, expect);
}

TEST(_441, _2)
{
    int expect = 3;
    int input = 8;

    Solution s;
    int result = s.arrangeCoins(input);

    EXPECT_EQ(result, expect);
}

TEST(_441, _3)
{
    int expect = 1;
    int input = 1;

    Solution s;
    int result = s.arrangeCoins(input);

    EXPECT_EQ(result, expect);
}
