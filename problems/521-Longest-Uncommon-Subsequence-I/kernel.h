#ifndef __521_KERNEL_H__
#define __521_KERNEL_H__

#include <string>
// #include <vector>
// #include <map>
#include <cmath>
using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) return -1;

        return max(a.length(), b.length());
    }
};

#endif  // __521_KERNEL_H__