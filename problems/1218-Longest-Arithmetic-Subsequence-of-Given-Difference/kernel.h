#ifndef __1218_KERNEL_H__
#define __1218_KERNEL_H__

// #include <string>
#include <vector>
#include <map>
#include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
// #include <iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int size = arr.size();
        vector<int> dp(size, 1);
        int maxl = 1;
        map<int, int> cache;

        for (int i = 0; i < size; i++) {
            if (cache.find(arr[i]-difference) != cache.end()) {
                dp[i] = cache[arr[i]-difference]+1;
                maxl = max(maxl, dp[i]);
                if (cache[arr[i]] < dp[i]) {
                    cache[arr[i]] = dp[i];
                }
            } else {
                cache[arr[i]] = 1;
            }
        }
        return maxl;
    }
};

#endif  // __1218_KERNEL_H__