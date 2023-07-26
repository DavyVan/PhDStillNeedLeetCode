#ifndef __566_KERNEL_H__
#define __566_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> out(r, vector<int>(c));
        int _m = 0, _n = 0;
        for (int _r = 0; _r < r; _r++) {
            for (int _c = 0; _c < c; _c++) {
                out[_r][_c] = mat[_m][_n];
                _n++;
                if (_n == n) {
                    _n = 0;
                    _m++;
                }
            }
        }
        return out;
    }
};

#endif  // __566_KERNEL_H__