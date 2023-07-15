#ifndef __415_KERNEL_H__
#define __415_KERNEL_H__

#include <string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();

        int carry = 0;
        int commonSize = 0;
        string* longger = nullptr;
        
        if (len1 > len2) {
            commonSize = len2;
            longger = &num1;
        } else {
            commonSize = len1;
            longger = &num2;
        }

        string result = "";
        // add the common part
        for (int i = 0; i < commonSize; i++) {
            char char1 = num1[len1-1-i] - '0';
            char char2 = num2[len2-1-i] - '0';
            int _sum = char1 + char2 + carry;
            carry = _sum / 10;
            char charNew = _sum % 10 + '0';
            result = charNew + result;
        }

        // handle the last carry digit of the common part
        int longgerLen = longger->length();
        if (longgerLen == commonSize && carry != 0) {
            result = '1' + result;
        } else {
            for (int i = commonSize; i < longgerLen; i++) {
                int _sum = (*longger)[longgerLen-1-i] - '0' + carry;
                carry = _sum / 10;
                char charNew = (_sum % 10) + '0';
                result = charNew + result;
            }
            // handle the last carry digit of the longer num
            if (carry != 0) {
                result = '1' + result;
        }
        }
        
        return result;
    }
};

#endif  // __415_KERNEL_H__