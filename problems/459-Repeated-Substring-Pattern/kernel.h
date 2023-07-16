#ifndef __459_KERNEL_H__
#define __459_KERNEL_H__

#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.length();
        for (int l = 1; l <= len/2; l++) {
            if (len % l != 0) {
                continue;
            }

            if (isRepeatedMatch(s, s.substr(0, l))) {
                return true;
            }
        }
        return false;
    }

    bool isRepeatedMatch(string s, string sub) {
        int lenS = s.length();
        int lenSub = sub.length();

        for (int i = lenSub; i < lenS; i+=lenSub) {
            if (s.compare(i, lenSub, sub) != 0) {
                return false;
            }
        }
        return true;
    }
};

#endif  // __459_KERNEL_H__