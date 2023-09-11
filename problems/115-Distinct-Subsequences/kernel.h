#ifndef __115_KERNEL_H__
#define __115_KERNEL_H__

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
public:
    int numDistinct(string s, string t) {
        int ls = s.length();
        int lt = t.length();

        auto dp = vector<vector<int>>(ls+1, vector<int>(lt+1, -1));

        return solve(dp, ls, lt, s, t);
    }

    int solve(vector<vector<int>> &dp, int is, int it, string &s, string &t) {
        if (dp[is][it] != -1) {
            return dp[is][it];
        }

        // if (is == 0 || it == 0) {
        //     return 0;
        // }

        if (is < it) {
            dp[is][it] = 0;
            return 0;
        }

        if (is == it) {
            string _s = s.substr(0, is);
            string _t = t.substr(0, it);
            if (_s == _t) {
                dp[is][it] = 1;
                return 1;
            } else {
                dp[is][it] = 0;
                return 0;
            }
        }

        // is > it
        if (it == 0) {
            dp[is][it] = 1;
            return 1;
        }
        
        int ret = solve(dp, is-1, it, s, t);
        if (s[is-1] == t[it-1]) {
            ret += solve(dp, is-1, it-1, s, t);
        }
        dp[is][it] = ret;
        return ret;
    }
};

#endif  // __115_KERNEL_H__