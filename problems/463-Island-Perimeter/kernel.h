#ifndef __463_KERNEL_H__
#define __463_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int p = 0;
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (grid[r][c] == 0) {
                    continue;
                }

                // up
                if (r == 0) {
                    p++;
                } else if (grid[r-1][c] == 0) {
                    p++;
                }

                // down
                if (r == row-1) {
                    p++;
                } else if (grid[r+1][c] == 0) {
                    p++;
                }

                // left
                if (c == 0) {
                    p++;
                } else if (grid[r][c-1] == 0) {
                    p++;
                }

                // right
                if (c == col-1) {
                    p++;
                } else if (grid[r][c+1] == 0) {
                    p++;
                }
            }
        }

        return p;
    }
};

#endif  // __463_KERNEL_H__