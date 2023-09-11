#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_115, _1)
{
    auto expect = 3;
    string s1 = "rabbbit";
    string s2 = "rabbit";

    Solution S;
    auto result = S.numDistinct(s1, s2);
    EXPECT_TRUE(result == expect);
}

TEST(_115, _2)
{
    auto expect = 5;
    string s1 = "babgbag";
    string s2 = "bag";

    Solution S;
    auto result = S.numDistinct(s1, s2);
    EXPECT_TRUE(result == expect);
}
