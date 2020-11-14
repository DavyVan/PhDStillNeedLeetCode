#include "kernel.h"
#include <unordered_map>

// TLE
// bool Solution::containsNearbyDuplicate(vector<int>& nums, int k)
// {
//     if (nums.size() == 0)
//         return false;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             if (i-j < 0)
//                 break;
//             if (nums[i] == nums[i-j])
//                 return true;
//         }
//     }
//     return false;
// }

bool Solution::containsNearbyDuplicate(vector<int>& nums, int k)
{
    if (nums.size() == 0)
        return false;

    unordered_map<int, int> _map;

    for (int i = 0; i < nums.size(); i++)
    {
        if (_map.find(nums[i]) != _map.end())
        {
            if (i - _map[nums[i]] <= k)
                return true;
        }

        _map[nums[i]] = i;
    }
    return false;
}