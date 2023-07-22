#ifndef __64_KERNEL_H__
#define __64_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <stack>
#include <cmath>
#include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> g(m, vector<int>(n, numeric_limits<int>::max()));
        g[0][0] = grid[0][0];

        int nextR = 0;
        int nextC = 0;
        while(true) {
            int r = nextR;
            int c = nextC;

            for (; r < m && c >= 0; r++, c--) {
                // right
                if (c != n-1) {
                    g[r][c+1] = min(g[r][c+1], g[r][c]+grid[r][c+1]);
                }

                // down
                if (r != m-1) {
                    g[r+1][c] = min(g[r+1][c], g[r][c]+grid[r+1][c]);
                }
            }

            if (nextC == n-1) {
                if (nextR == m-1) {
                    break;
                } else {
                    nextR++;
                }
            } else {
                nextC++;
            }
        }

        return g[m-1][n-1];
    }
};

#endif  // __64_KERNEL_H__