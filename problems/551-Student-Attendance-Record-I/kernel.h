#ifndef __551_KERNEL_H__
#define __551_KERNEL_H__

#include <string>
// #include <vector>
// #include <map>
// #include <cmath>
// #include <limits>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int maxlate = 0;
        int currentlate = 0;

        for (char c : s) {
            switch (c) {
            case 'A':
                absent++;
                if (currentlate > 0) {
                    maxlate = (currentlate > maxlate ? currentlate : maxlate);
                    currentlate = 0;
                }
                break;
            case 'L':
                currentlate++;
                break;
            case 'P':
                if (currentlate > 0) {
                    maxlate = (currentlate > maxlate ? currentlate : maxlate);
                    currentlate = 0;
                }
                break;
            }
        }
        if (currentlate > 0) {
            maxlate = (currentlate > maxlate ? currentlate : maxlate);
            currentlate = 0;
        }

        return (absent < 2 && maxlate < 3);
    }
};

#endif  // __551_KERNEL_H__