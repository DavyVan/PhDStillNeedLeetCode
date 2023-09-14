#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>
#include <algorithm>

TEST(_1218, _1)
{
    auto expect = 4;
    vector<int> flowerbed = {1, 2, 3, 4};
    int n = 1;

    Solution S;
    auto result = S.longestSubsequence(flowerbed, n);

    EXPECT_TRUE(result == expect);
}

TEST(_1218, _2)
{
    auto expect = 1;
    vector<int> flowerbed = {1, 3, 5, 7};
    int n = 1;

    Solution S;
    auto result = S.longestSubsequence(flowerbed, n);

    EXPECT_TRUE(result == expect);
}

TEST(_1218, _3)
{
    auto expect = 4;
    vector<int> flowerbed = {1,5,7,8,5,3,4,2,1};
    int n = -2;

    Solution S;
    auto result = S.longestSubsequence(flowerbed, n);

    EXPECT_TRUE(result == expect);
}
