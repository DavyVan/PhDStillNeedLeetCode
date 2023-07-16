#include "kernel.h"
#include <gtest/gtest.h>

TEST(_476, _1)
{
    auto expect = 2;
    int n = 5;

    Solution S;
    auto result = S.findComplement(n);

    EXPECT_EQ(result, expect);
}

TEST(_476, _2)
{
    auto expect = 0;
    int n = 1;

    Solution S;
    auto result = S.findComplement(n);

    EXPECT_EQ(result, expect);
}

TEST(_476, _3)
{
    auto expect = 3;
    int n = 4;

    Solution S;
    auto result = S.findComplement(n);

    EXPECT_EQ(result, expect);
}
