#ifndef __5_KERNEL_H__
#define __5_KERNEL_H__

#include <string>
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
    string longestPalindrome(string s) {
        int l = s.length();
        if (l <= 1) return s;

        int maxl = 0;
        int maxi;
        vector<int> t(l, 1);
        for (int i = 1; i < l; i++) {
            if (i-t[i-1]-1 >= 0 && s[i-t[i-1]-1] == s[i]) {
                t[i] = t[i-1] + 2;
            } else {
                for (int j = i-t[i-1]; j < i; j++) {
                    if (isPalindrome(s, j, i)) {
                        t[i] = i-j+1;
                        break;
                    }
                }
            }

            if (t[i] > maxl) {
                maxl = t[i];
                maxi = i;
            }
        }
        return s.substr(maxi-maxl+1, maxl);
    }
private:
    bool isPalindrome(string& s, int start, int end) {
        while (end > start) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

#endif  // __5_KERNEL_H__