#ifndef __63_KERNEL_H__
#define __63_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <stack>
// #include <cmath>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>> grid(m, vector<int>(n, 0));
        grid[0][0] = 1;

        int nextR = 0;
        int nextC = 0;

        while(true) {
            int r = nextR;
            int c = nextC;

            for (; r < m && c >= 0; r++, c--) {
                // obstacle
                if (obstacleGrid[r][c] == 1) continue;

                // right
                if (c != n-1) {
                    grid[r][c+1] += grid[r][c];
                }

                // down
                if (r != m-1) {
                    grid[r+1][c] += grid[r][c];
                }
            }

            // prepare for next line
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

        return (obstacleGrid[m-1][n-1] == 1 ? 0 : grid[m-1][n-1]);
    }
};

#endif  // __63_KERNEL_H__