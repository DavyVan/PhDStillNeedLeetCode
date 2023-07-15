#include "kernel.h"
#include <gtest/gtest.h>

TEST(_448, _1)
{
    vector<int> expect = {5, 6};
    vector<int> input = {4, 3, 2, 7, 8, 2, 3, 1};

    Solution s;
    vector<int> result = s.findDisappearedNumbers(input);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_448, _2)
{
    vector<int> expect = {2};
    vector<int> input = {1, 1};

    Solution s;
    vector<int> result = s.findDisappearedNumbers(input);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_EQ(result[i], expect[i]);
    }
}

TEST(_448, _3)
{
    vector<int> expect = {1};
    vector<int> input = {2, 2};

    Solution s;
    vector<int> result = s.findDisappearedNumbers(input);

    EXPECT_EQ(result.size(), expect.size());
    for (int i = 0; i < result.size(); i++) {
        EXPECT_EQ(result[i], expect[i]);
    }
}
