#include "kernel.h"
#include <gtest/gtest.h>
#include <set>

TEST(_401, _0)
{
    int n = 0;
    set<string> expect{"0:00"};
    vector<string> ret = Solution::readBinaryWatch(n);
    ASSERT_EQ(expect.size(), ret.size());
    for (vector<string>::iterator it = ret.begin(); it < ret.end(); it++)
    {
        EXPECT_NE(expect.find(*it), expect.end());
    }
}

TEST(_401, _1)
{
    int n = 1;
    set<string> expect{"1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"};
    vector<string> ret = Solution::readBinaryWatch(n);
    ASSERT_EQ(expect.size(), ret.size());
    for (vector<string>::iterator it = ret.begin(); it < ret.end(); it++)
    {
        EXPECT_NE(expect.find(*it), expect.end());
    }
}