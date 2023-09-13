#ifndef __673_KERNEL_H__
#define __673_KERNEL_H__

// #include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
// #include <limits>
// #include <sstream>
#include <iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int size = nums.size();

        vector<int> dp(size, 1);
        vector<int> count(size, 1);

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (dp[j]+1 > dp[i]) {
                        dp[i] = dp[j]+1;
                        count[i] = count[j];
                    } else if (dp[j]+1 == dp[i]) {
                        count[i] += count[j];
                    }
                }
            }
        }

        int maxl = 0;
        int maxCount = 0;
        for (int i = 0; i < size; i++) {
            if (dp[i] > maxl) {
                maxl = dp[i];
                maxCount = count[i];
            } else if (dp[i] == maxl) {
                maxCount += count[i];
            }
        }
        return maxCount;
    }
};

#endif  // __673_KERNEL_H__