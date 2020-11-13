#include "kernel.h"
#include <algorithm>

bool Solution::containsDuplicate(vector<int>& nums)
{
    if (nums.size() == 0)
        return false;
        
    vector<int> _nums(nums);    // copy
    sort(_nums.begin(), _nums.end());
    for (vector<int>::iterator it = _nums.begin()+1; it < _nums.end(); it++)
    {
        if (*it == *(it-1))
            return true;
    }
    return false;
}