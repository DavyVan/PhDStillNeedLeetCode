#include "kernel.h"
#include <gtest/gtest.h>
#include <set>

TEST(_349, _1)
{
    vector<int> _1{1, 2, 2, 1};
    vector<int> _2{2, 2};
    set<int> expect{2};
    vector<int> ret = Solution::intersection(_1, _2);
    for (int i = 0; i < ret.size(); i++)
        EXPECT_TRUE(expect.find(ret[i]) != expect.end());
}

TEST(_349, _2)
{
    vector<int> _1{4, 9, 5};
    vector<int> _2{9, 4, 9, 8, 4};
    set<int> expect{9, 4};
    vector<int> ret = Solution::intersection(_1, _2);
    for (int i = 0; i < ret.size(); i++)
        EXPECT_TRUE(expect.find(ret[i]) != expect.end());
}
