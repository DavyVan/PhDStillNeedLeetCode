#ifndef __1009_KERNEL_H__
#define __1009_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        int len = 1;
        int mask = 0b1;
        for (; len < 32 && mask <= n; len++, mask<<=1) {}
        mask = 0x7fffffff;
        return n ^ (mask >> (32-len));
    }
};

#endif  // __1009_KERNEL_H__