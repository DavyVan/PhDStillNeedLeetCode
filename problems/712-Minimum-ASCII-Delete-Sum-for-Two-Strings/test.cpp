#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(_712, _1)
{
    auto expect = 231;
    string s1 = "sea";
    string s2 = "eat";

    Solution S;
    auto result = S.minimumDeleteSum(s1, s2);
    EXPECT_TRUE(result == expect);
}

TEST(_712, _2)
{
    auto expect = 403;
    string s1 = "delete";
    string s2 = "leet";

    Solution S;
    auto result = S.minimumDeleteSum(s1, s2);
    EXPECT_TRUE(result == expect);
}
