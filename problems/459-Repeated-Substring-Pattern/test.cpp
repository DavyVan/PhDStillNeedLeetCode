#include "kernel.h"
#include <gtest/gtest.h>

TEST(_459, _1)
{
    auto expect = true;
    string s = "abab";

    Solution S;
    auto result = S.repeatedSubstringPattern(s);

    EXPECT_EQ(result, expect);
}

TEST(_459, _2)
{
    auto expect = false;
    string s = "aba";

    Solution S;
    auto result = S.repeatedSubstringPattern(s);

    EXPECT_EQ(result, expect);
}

TEST(_459, _3)
{
    auto expect = true;
    string s = "abcabcabcabc";

    Solution S;
    auto result = S.repeatedSubstringPattern(s);

    EXPECT_EQ(result, expect);
}
