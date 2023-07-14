#ifndef __405_KERNEL_H__
#define __405_KERNEL_H__

#include <string>
using namespace std;

class Solution {
private:
    const int mask = 0b1111;
    const string dict[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"};
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }

        string s;
        for (int i = 0; i < 32; i+=4) {
            if (num == 0) {
                break;
            }
            s = dict[num & mask] + s;
            num >>= 4;
        }

        return s;
    }
};

#endif  // __405_KERNEL_H__