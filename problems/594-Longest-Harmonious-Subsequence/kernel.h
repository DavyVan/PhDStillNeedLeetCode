#ifndef __594_KERNEL_H__
#define __594_KERNEL_H__

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
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxLen = 0;
        int current = nums[0];
        int currentCount = 0;
        int previous = 1e9+1;
        int previousCount = 0;
        int currentLen = 0;

        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (*it == current) {
                currentCount++;
            } else {
                if (current - previous == 1) {
                    maxLen = max(maxLen, currentCount+previousCount);
                }
                // reset counters
                previous = current;
                previousCount = currentCount;
                current = *it;
                currentCount = 1;
            }
        }
        // handle the last current
        if (current - previous == 1) {
            maxLen = max(maxLen, currentCount+previousCount);
        }
        return maxLen;
    }
};

#endif  // __594_KERNEL_H__