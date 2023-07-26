#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_5, _1)
{
    auto expect = "bab";
    string s = "babad";

    Solution S;
    auto result = S.longestPalindrome(s);

    EXPECT_TRUE(result == expect);
}

TEST(_5, _2)
{
    auto expect = "bb";
    string s = "cbbd";

    Solution S;
    auto result = S.longestPalindrome(s);

    EXPECT_TRUE(result == expect);
}
