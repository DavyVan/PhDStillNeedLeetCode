#include "kernel.h"
#include <gtest/gtest.h>

TEST(_520, _1)
{
    auto expect = true;
    string word = "USA";

    Solution S;
    auto result = S.detectCapitalUse(word);
    EXPECT_TRUE(result == expect);
}

TEST(_520, _2)
{
    auto expect = false;
    string word = "FlaG";

    Solution S;
    auto result = S.detectCapitalUse(word);
    EXPECT_TRUE(result == expect);
}

TEST(_520, _3)
{
    auto expect = false;
    string word = "FFFFFFFFFFFf";

    Solution S;
    auto result = S.detectCapitalUse(word);
    EXPECT_TRUE(result == expect);
}