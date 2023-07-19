#ifndef __541_KERNEL_H__
#define __541_KERNEL_H__

#include <string>
// #include <vector>
// #include <map>
// #include <cmath>
// #include <limits>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        string result;
        result.reserve(len);

        for (int i = 0; i < len; i+=2*k) {
            if (len - i < k) {
                reverse(s, result, i, len-1);
                break;
            } else {
                reverse(s, result, i, i+k-1);
            }

            result += s.substr(i+k, k);
        }

        return result;
    }

private:
    /***
     * @brief reverse src[start, end] and append to dest. Caller guarantees the start and end are inside the string.
     * 
     */
    void reverse(string src, string& dest, int start /* inclusive */, int end /* inclusive */) {
        for (int i = end; i >= start; i--) {
            dest += src[i];
        }
    }
};

#endif  // __541_KERNEL_H__