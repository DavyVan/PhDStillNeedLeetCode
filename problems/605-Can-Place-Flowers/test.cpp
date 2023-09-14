#include "kernel.h"
#include <gtest/gtest.h>
#include <sstream>
#include <algorithm>

TEST(_605, _1)
{
    auto expect = true;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    Solution S;
    auto result = S.canPlaceFlowers(flowerbed, n);

    EXPECT_TRUE(result == expect);
}

TEST(_605, _2)
{
    auto expect = false;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 2;

    Solution S;
    auto result = S.canPlaceFlowers(flowerbed, n);

    EXPECT_TRUE(result == expect);
}
