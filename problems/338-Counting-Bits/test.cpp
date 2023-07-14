#include "kernel.h"
#include <gtest/gtest.h>

TEST(_338, _1)
{
    vector<int> expect = {0};

    Solution s;
    vector<int> result = s.countBits(0);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_338, _2)
{
    vector<int> expect = {0, 1, 1};

    Solution s;
    vector<int> result = s.countBits(2);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_338, _3)
{
    vector<int> expect = {0, 1, 1, 2, 1, 2};

    Solution s;
    vector<int> result = s.countBits(5);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++)
    {
        EXPECT_EQ(result[i], expect[i]);
    }
}