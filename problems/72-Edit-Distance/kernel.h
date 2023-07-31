#ifndef __72_KERNEL_H__
#define __72_KERNEL_H__

#include <string>
#include <vector>
// #include <map>
// #include <queue>
#include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
// #include <iostream>
// #include <memory>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int w1 = word1.length();
        int w2 = word2.length();
    
        vector<vector<int>> m(w1+1, vector<int>(w2+1, 0));

        for (int i = 1; i <= w1; i++) {
            m[i][0] = i;
        }
        for (int j = 1; j <= w2; j++) {
            m[0][j] = j;
        }

        for (int i = 1; i <= w1; i++) {
            for (int j = 1; j <= w2; j++) {
                if (word1[i-1] == word2[j-1]) {
                    m[i][j] = m[i-1][j-1];
                } else {
                    m[i][j] = min(m[i-1][j-1], min(m[i-1][j], m[i][j-1]))+1;
                }
            }
        }

        return m[w1][w2];
    }
};

#endif  // __72_KERNEL_H__