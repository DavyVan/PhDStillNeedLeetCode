#ifndef __557_KERNEL_H__
#define __557_KERNEL_H__

#include <string>
// #include <vector>
// #include <map>
// #include <cmath>
// #include <limits>
#include <sstream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string result, t;

        while(ss >> t) {
            if (result.length() > 0) {
                result += " ";
            }

            int tlen = t.length();
            for (int i = tlen-1; i >= 0; i--) {
                result += t[i];
            }
        }
        return result;
    }
};

#endif  // __557_KERNEL_H__