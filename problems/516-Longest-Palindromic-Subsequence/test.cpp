#include "kernel.h"
#include <gtest/gtest.h>

TEST(_516, _1)
{
    auto expect = 4;
    string s = "bbbab";

    Solution S;
    auto result = S.longestPalindromeSubseq(s);
    EXPECT_TRUE(result == expect);
}

TEST(_516, _2)
{
    auto expect = 2;
    string s = "cbbd";

    Solution S;
    auto result = S.longestPalindromeSubseq(s);
    EXPECT_TRUE(result == expect);
}
