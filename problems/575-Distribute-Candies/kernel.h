#ifndef __575_KERNEL_H__
#define __575_KERNEL_H__

// #include <string>
#include <vector>
#include <map>
// #include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        map<int, int> m;
        for (int x : candyType) {
            m[x]++;
        }

        int typenum = m.size();
        if (typenum > n/2) {
            return n/2;
        } else {
            return typenum;
        }
    }
};

#endif  // __575_KERNEL_H__