#ifndef __520_KERNEL_H__
#define __520_KERNEL_H__

#include <string>
// #include <vector>
// #include <map>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() == 1) return true;

        bool isFirstCapital = false, isAllCapital = false;
        if (word[0] >= 'A' && word[0] <= 'Z') {
            isFirstCapital = true;
        }
        if (word[1] >= 'A' && word[1] <= 'Z') {
            if (isFirstCapital) {
                isAllCapital = true;
            } else {
                return false;
            }
        }

        int len = word.length();
        bool isCapital;
        for (int i = 2; i < len; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                isCapital = true;
            } else {
                isCapital = false;
            }

            if ((isCapital && !isAllCapital) || (!isCapital && isAllCapital)) {
                return false;
            }
        }
        return true;
    }
};

#endif  // __520_KERNEL_H__