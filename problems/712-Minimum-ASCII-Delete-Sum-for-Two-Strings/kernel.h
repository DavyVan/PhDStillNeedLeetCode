#ifndef __712_KERNEL_H__
#define __712_KERNEL_H__

#include <string>
#include <vector>
// #include <map>
// #include <stack>
#include <cmath>
#include <limits>
// #include <sstream>
#include <cstring>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
private:
    int dp[1000][1000];
public:
    int minimumDeleteSum(string s1, string s2) {
        memset(dp, -1, 1000*1000*sizeof(int));
        return solve(0, 0, s1, s2);
    }

    int solve(int i, int j, string &s1, string &s2) {
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (i == s1.length()) {
            int sum = 0;
            for (; j < s2.length(); j++) {
                sum += s2[j];
            }
            return sum;
        }

        if (j == s2.length()) {
            int sum = 0;
            for (; i < s1.length(); i++) {
                sum += s1[i];
            }
            return sum;
        }

        int ret = min(s1[i]+solve(i+1, j, s1, s2), s2[j]+solve(i, j+1, s1, s2));
        if (s1[i] == s2[j]) {
            ret = min(ret, solve(i+1, j+1, s1, s2));
        }
        dp[i][j] = ret;
        return ret;
    }
};

#endif  // __712_KERNEL_H__