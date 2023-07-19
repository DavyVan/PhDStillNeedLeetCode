#include "kernel.h"
#include <gtest/gtest.h>

TEST(_521, _1)
{
    auto expect = 3;
    string a = "aba";
    string b = "cdc";

    Solution S;
    auto result = S.findLUSlength(a, b);
    EXPECT_TRUE(result == expect);
}

TEST(_521, _2)
{
    auto expect = 3;
    string a = "aaa";
    string b = "bbb";

    Solution S;
    auto result = S.findLUSlength(a, b);
    EXPECT_TRUE(result == expect);
}

TEST(_521, _3)
{
    auto expect = -1;
    string a = "aaa";
    string b = "aaa";

    Solution S;
    auto result = S.findLUSlength(a, b);
    EXPECT_TRUE(result == expect);
}