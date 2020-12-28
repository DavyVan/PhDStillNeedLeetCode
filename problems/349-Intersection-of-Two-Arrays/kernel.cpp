#include "kernel.h"
#include <set>
#include <algorithm>

vector<int> Solution::intersection(vector<int>& nums1, vector<int>& nums2)
{
    set<int> _1(nums1.begin(), nums1.end());
    set<int> _2(nums2.begin(), nums2.end());
    vector<int> ret(max(nums1.size(), nums2.size()));
    vector<int>::iterator ret_end = set_intersection(_1.begin(), _1.end(), _2.begin(), _2.end(), ret.begin());
    ret.resize(ret_end - ret.begin());
    return ret;
}
