#include "kernel.h"
#include <gtest/gtest.h>
#include <map>

TEST(_350, _1)
{
    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    map<int, int> expect{{2, 2}};

    vector<int> ret = Solution::intersect(nums1, nums2);
    map<int, int> ret_map;
    for (vector<int>::iterator it = ret.begin(); it < ret.end(); it++)
    {
        if (ret_map.find(*it) != ret_map.end())
            ret_map[*it]++;
        else
            ret_map[*it] = 1;
    }

    // verify
    for (map<int, int>::iterator it = expect.begin(); it != expect.end(); it++)
    {
        ASSERT_NE(ret_map.find(it->first), ret_map.end());
        EXPECT_EQ(ret_map[it->first], it->second);
    }
    for (map<int, int>::iterator it = ret_map.begin(); it != ret_map.end(); it++)
    {
        ASSERT_NE(expect.find(it->first), expect.end());
        EXPECT_EQ(expect[it->first], it->second);
    }
}

TEST(_350, _2)
{
    vector<int> nums1{4, 9, 5};
    vector<int> nums2{9, 4, 9, 8, 4};
    map<int, int> expect{{4, 1}, {9, 1}};

    vector<int> ret = Solution::intersect(nums1, nums2);
    map<int, int> ret_map;
    for (vector<int>::iterator it = ret.begin(); it < ret.end(); it++)
    {
        if (ret_map.find(*it) != ret_map.end())
            ret_map[*it]++;
        else
            ret_map[*it] = 1;
    }

    // verify
    for (map<int, int>::iterator it = expect.begin(); it != expect.end(); it++)
    {
        ASSERT_NE(ret_map.find(it->first), ret_map.end());
        EXPECT_EQ(ret_map[it->first], it->second);
    }
    for (map<int, int>::iterator it = ret_map.begin(); it != ret_map.end(); it++)
    {
        ASSERT_NE(expect.find(it->first), expect.end());
        EXPECT_EQ(expect[it->first], it->second);
    }
}