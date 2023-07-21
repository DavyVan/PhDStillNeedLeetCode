#ifndef __740_KERNEL_H__
#define __740_KERNEL_H__

// #include <string>
#include <vector>
#include <map>
#include <stack>
// #include <cmath>
// #include <limits>
// #include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // count each number
        map<int, int> stat;
        for (int n : nums) {
            stat[n]++;
        }

        auto begin = stat.begin();
        int lastk = begin->first;
        int lastv = begin->second;
        int take = begin->first * begin->second;
        int skip = 0;
        for (auto it = next(begin); it != stat.end(); it++) {
            if (it->first != lastk+1) {
                skip = (take >= skip ? take : skip);
                take = skip + it->first * it->second;
            } else {
                int _take = skip + it->first * it->second;
                int _skip = (take >= skip ? take : skip);
                take = _take;
                skip = _skip;
            }
            lastk = it->first;
            lastv = it->second;
        }
        return (take >= skip ? take : skip);
    }
};

#endif  // __740_KERNEL_H__