#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_557, _1)
{
    auto expect = "s'teL ekat edoCteeL tsetnoc";
    string s = "Let's take LeetCode contest";

    Solution S;
    auto result = S.reverseWords(s);
    EXPECT_TRUE(result == expect);
}

TEST(_557, _2)
{
    auto expect = "doG gniD";
    string s = "God Ding";

    Solution S;
    auto result = S.reverseWords(s);
    EXPECT_TRUE(result == expect);
}
