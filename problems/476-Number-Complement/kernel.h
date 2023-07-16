#ifndef __476_KERNEL_H__
#define __476_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int len = 1;
        int mask = 0b1;
        for (; len < 32 && mask <= num; len++, mask<<=1) {}
        mask = 0x7fffffff;
        return num ^ (mask >> (32-len));
    }
};

#endif  // __476_KERNEL_H__