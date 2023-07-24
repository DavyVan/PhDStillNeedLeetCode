#ifndef __221_KERNEL_H__
#define __221_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
// #include <cmath>
// #include <algorithm>
// #include <limits>
#include <iostream>
// #include "../../utils/binary_tree.h"
#include "../../utils/output.h"
using namespace std;

// class Solution {
// public:
//     int maximalSquare(vector<vector<char>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         vector<vector<int>> matrixInt(m, vector<int>(n));
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 matrixInt[i][j] = matrix[i][j] - '0';
//             }
//         }
//         int maxN = 0;

//         for (int r = 0; r < m; r++) {
//             for (int c = 0; c < n; c++) {
//                 if (matrixInt[r][c] == 0) continue;

//                 int testN;
//                 if (r-1 < 0 || c-1 < 0 || matrixInt[r-1][c-1] == 0) {
//                     testN = 1;
//                 } else {
//                     testN = matrixInt[r-1][c-1]+1;
//                 }
//                 cout << "At (" << r << ", " << c << "), testN=" << testN;

//                 int squareR = 0;
//                 int squareC = 0;
//                 // vertical
//                 for (; r-squareR >= 0 && matrixInt[r-squareR][c] != 0 && squareR < testN; squareR++) {}
//                 // horizontal
//                 for (; c-squareC >= 0 && matrixInt[r][c-squareC] != 0 && squareC < testN; squareC++) {}

//                 testN = min(squareR, squareC);
//                 matrixInt[r][c] = testN;
//                 if (testN > maxN) {
//                     maxN = testN;
//                 }

//                 cout << ", sR=" << squareR << ", sC=" << squareC << endl;
//             }
//         }

//         return maxN*maxN;
//     }
// };

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> matrixInt(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrixInt[i][j] = matrix[i][j] - '0';
            }
        }
        int maxN = 0;

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (r == 0 || c == 0 || matrixInt[r][c] == 0) {}
                else {
                    matrixInt[r][c] = min(matrixInt[r-1][c-1], min(matrixInt[r-1][c], matrixInt[r][c-1]))+1;
                }

                if (matrixInt[r][c] > maxN) {
                    maxN = matrixInt[r][c];
                }
            }
        }

        return maxN*maxN;
    }
};

#endif  // __221_KERNEL_H__