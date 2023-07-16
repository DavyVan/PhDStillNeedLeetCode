#include "kernel.h"
#include <gtest/gtest.h>

TEST(_455, _1)
{
    int expect = 1;
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};

    Solution S;
    int result = S.findContentChildren(g, s);

    EXPECT_EQ(result, expect);
}

TEST(_455, _2)
{
    int expect = 2;
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    Solution S;
    int result = S.findContentChildren(g, s);

    EXPECT_EQ(result, expect);
}

TEST(_455, _3)
{
    int expect = 0;
    vector<int> g = {1, 2, 3};
    vector<int> s = {};

    Solution S;
    int result = S.findContentChildren(g, s);

    EXPECT_EQ(result, expect);
}
