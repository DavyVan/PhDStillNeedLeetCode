#ifndef __139_KERNEL_H__
#define __139_KERNEL_H__

#include <string>
#include <vector>
// #include <map>
// #include <cmath>
// #include <algorithm>
// #include <limits>
// #include <sstream>
#include <iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int l = s.length();
        vector<bool> t(l+1, false);
        t[0] = true;
        for (int i = 1; i <= l; i++) {
            int j = i-20+1;
            if (j < 1) j = 1;
            for (; j <= i; j++) {
                // cout << "substring: " << s.substr(j-1, i-j+1);
                if (t[j-1] && inDict(s.substr(j-1, i-j+1), wordDict)) {
                    t[i] = true;
                    break;
                }
            }
        }
        return t[l];
    }
private:
    bool inDict(string s, vector<string>& wordDict) {
        for (string x : wordDict) {
            if (s == x) {
                return true;
            }
        }
        return false;
    }
};

#endif  // __139_KERNEL_H__