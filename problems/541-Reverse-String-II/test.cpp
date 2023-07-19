#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_541, _1)
{
    auto expect = "bacdfeg";
    string s = "abcdefg";
    int k = 2;

    Solution S;
    auto result = S.reverseStr(s, k);
    EXPECT_TRUE(result == expect);
}

TEST(_541, _2)
{
    auto expect = "bacd";
    string s = "abcd";
    int k = 2;

    Solution S;
    auto result = S.reverseStr(s, k);
    EXPECT_TRUE(result == expect);
}
