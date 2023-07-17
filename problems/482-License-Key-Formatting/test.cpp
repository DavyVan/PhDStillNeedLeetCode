#include "kernel.h"
#include <gtest/gtest.h>

TEST(_482, _1)
{
    auto expect = "5F3Z-2E9W";
    string s = "5F3Z-2e-9-w";
    int k = 4;

    Solution S;
    auto result = S.licenseKeyFormatting(s, k);

    EXPECT_TRUE(result == expect);
}

TEST(_482, _2)
{
    auto expect = "2-5G-3J";
    string s = "2-5g-3-J";
    int k = 2;

    Solution S;
    auto result = S.licenseKeyFormatting(s, k);

    EXPECT_TRUE(result == expect);
}

TEST(_482, _3)
{
    auto expect = "A-A-A-A";
    string s = "a-a-a-a-";
    int k = 1;

    Solution S;
    auto result = S.licenseKeyFormatting(s, k);

    EXPECT_TRUE(result == expect);
}

TEST(_482, _4)
{
    auto expect = "";
    string s = "---";
    int k = 3;

    Solution S;
    auto result = S.licenseKeyFormatting(s, k);

    EXPECT_TRUE(result == expect);
}