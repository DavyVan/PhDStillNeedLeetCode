#ifndef __120_KERNEL_H__
#define __120_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <stack>
#include <cmath>
#include <algorithm>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> t(n, 0);

        // init
        if (n == 1) {
            return triangle[0][0];
        }
        t[0] = triangle[0][0];

        for (int i = 1; i < n; i++) {
            auto r = triangle[i];
            int rl = r.size();
            for (int j = rl-1; j >= 0; j--) {
                int _cur = r[j];
                if (j == rl-1) {
                    t[j] = t[j-1] + _cur;
                } else if (j == 0) {
                    t[j] = t[j] + _cur;
                } else {
                    t[j] = min(t[j-1] + _cur, t[j] + _cur);
                }
            }
        }

        return *(min_element(t.begin(), t.end()));
    }
};

#endif  // __120_KERNEL_H__