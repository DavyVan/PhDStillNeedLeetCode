#ifndef __504_KERNEL_H__
#define __504_KERNEL_H__

#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool neg = (num < 0 ? true : false);
        num = abs(num);

        string result = "";
        while (num >= 7) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        result = to_string(num) + result;
        if (neg) {
            result = '-' + result;
        }
        return result;
    }
};

#endif  // __504_KERNEL_H__