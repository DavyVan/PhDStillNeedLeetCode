#ifndef __931_KERNEL_H__
#define __931_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
#include <cmath>
#include <algorithm>
// #include <limits>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        if (n == 1) {
            return *(min_element(matrix[0].begin(), matrix[0].end()));
        }

        for (int r = 1; r < n; r++) {
            for (int c = 0; c < n; c++) {
                int t = matrix[r][c];
                int _min = t + matrix[r-1][c];
                if (c > 0) {
                    _min = min(_min, t + matrix[r-1][c-1]);
                }
                if (c < n-1) {
                    _min = min(_min, t + matrix[r-1][c+1]);
                }
                matrix[r][c] = _min;
            }
        }

        return *(min_element(matrix[n-1].begin(), matrix[n-1].end()));
    }
};

#endif  // __931_KERNEL_H__