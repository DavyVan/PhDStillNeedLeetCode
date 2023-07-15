#include "kernel.h"
#include <gtest/gtest.h>

TEST(_414, _1)
{
    int expect = 1;
    vector<int> input = {3, 2, 1};

    Solution s;
    int result = s.thirdMax(input);

    EXPECT_EQ(result, expect);
}

TEST(_414, _2)
{
    int expect = 2;
    vector<int> input = {1,2};

    Solution s;
    int result = s.thirdMax(input);

    EXPECT_EQ(result, expect);
}

TEST(_414, _3)
{
    int expect = 1;
    vector<int> input = {2, 2, 3, 1};

    Solution s;
    int result = s.thirdMax(input);

    EXPECT_EQ(result, expect);
}

TEST(_414, _4)
{
    int expect = -2147483648;
    vector<int> input = {1,2,-2147483648};

    Solution s;
    int result = s.thirdMax(input);

    EXPECT_EQ(result, expect);
}