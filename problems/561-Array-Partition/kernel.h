#ifndef __561_KERNEL_H__
#define __561_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
#include <cmath>
#include <algorithm>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int sum = 0;
        for (int i = 0; i < size; i+=2) {
            sum += min(nums[i], nums[i+1]);
        }
        return sum;
    }
};

#endif  // __561_KERNEL_H__