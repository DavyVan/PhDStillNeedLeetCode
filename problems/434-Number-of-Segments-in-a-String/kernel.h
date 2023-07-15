#ifndef __434_KERNEL_H__
#define __434_KERNEL_H__

#include <string>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int result = 0;
        bool isPrevSpace = true;

        if (s == "") {
            return 0;
        }

        for (char c : s) {
            if (c == ' ' && isPrevSpace == true) {
                continue;
            } else if (c == ' ' && isPrevSpace == false) {
                isPrevSpace = true;
            } else if (c != ' ' && isPrevSpace == true) {
                result++;
                isPrevSpace = false;
            } else {
                continue;
            }
        }

        return result;
    }
};

#endif  // __434_KERNEL_H__