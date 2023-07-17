#ifndef __482_KERNEL_H__
#define __482_KERNEL_H__

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // count dashes
        int cDash = 0;
        for (char c : s) {
            if (c == '-') {
                cDash++;
            }
        }

        int sLen = s.length();
        int actualLen = sLen - cDash;
        int firstGroupLen = actualLen % k;
        if (firstGroupLen == 0) {
            firstGroupLen = k;
        }

        string result = "";
        int currentGroupLen = firstGroupLen;
        for (char c : s) {
            if (c == '-') {
                continue;
            }

            result += static_cast<char>(toupper(static_cast<unsigned char>(c)));
            currentGroupLen--;
            if (currentGroupLen == 0) {
                result += '-';
                currentGroupLen = k;
            }
        }

        // handle empty result
        if (result.length() == 0) {
            return result;
        }

        // delete trail dash
        if (result[result.length()-1] == '-') {
            result.pop_back();
        }

        return result;
    }
};

#endif  // __482_KERNEL_H__