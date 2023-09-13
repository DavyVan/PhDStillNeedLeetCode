#ifndef __598_KERNEL_H__
#define __598_KERNEL_H__

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
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        // auto M = vector<vector<int>>(m, vector<int>(n, 0)); 

        int opsize = ops.size();
        if (opsize == 0) {
            return m*n;
        }

        int r = m;
        int c = n;
        for (int i = 0; i < opsize; i++) {
            r = min(ops[i][0], r);
            c = min(ops[i][1], c);
        }
        return r*c;
    }
};

#endif  // __598_KERNEL_H__