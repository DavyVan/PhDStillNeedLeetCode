#include "kernel.h"
#include <gtest/gtest.h>

TEST(_1009, _1)
{
    auto expect = 2;
    int n = 5;

    Solution S;
    auto result = S.bitwiseComplement(n);

    EXPECT_EQ(result, expect);
}

TEST(_1009, _2)
{
    auto expect = 0;
    int n = 1;

    Solution S;
    auto result = S.bitwiseComplement(n);

    EXPECT_EQ(result, expect);
}

TEST(_1009, _3)
{
    auto expect = 1;
    int n = 0;

    Solution S;
    auto result = S.bitwiseComplement(n);

    EXPECT_EQ(result, expect);
}
