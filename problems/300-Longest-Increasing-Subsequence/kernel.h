#ifndef __300_KERNEL_H__
#define __300_KERNEL_H__

// #include <string>
#include <vector>
#include <map>
// #include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
#include<iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<int> maxlens(size, 0);
        int maxlen = 1;

        for (int i = 0; i < size; i++) {
            int t = nums[i];
            // cout<<"current: " << t << endl;
            int _maxl = 0;
            int _maxj = -1;
            for (int j = i-1; j >= 0; j--) {
                if (nums[j] < t && maxlens[j] > _maxl) {
                    _maxl = maxlens[j];
                    _maxj = j;
                }
            }
            // cout << "j="<<_maxj<<endl;
            if (_maxj == -1) {
                maxlens[i] = 1;
            } else {
                int l = _maxl + 1;
                maxlens[i] = l;
                maxlen = max(maxlen, l);
            }
        }
        return maxlen;
    }
};

#endif  // __300_KERNEL_H__