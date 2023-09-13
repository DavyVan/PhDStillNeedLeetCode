#ifndef __646_KERNEL_H__
#define __646_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
#include <cmath>
#include <algorithm>
// #include <limits>
// #include <sstream>
// #include <iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), comp);
        vector<int> dp(pairs.size(), 1);

        int size = pairs.size();
        int maxl = 1;
        dp[0] = 1;
        for (int i = 1; i < size; i++) {
            for (int j = i-1; j >= 0; j--) {
                if (pairs[i][0] > pairs[j][1]) {
                    if (dp[j]+1 > dp[i]) {
                        dp[i] = dp[j]+1;
                        maxl = max(maxl, dp[i]);
                    }
                }
            }
        }
        return maxl;
    }

    static bool comp(vector<int> &a, vector<int> &b) {
        if (a[1] < b[0]) {
            return true;
        } else if (a[1] < b[1]) {
            return true;
        }
        return false;
    }
};

#endif  // __646_KERNEL_H__