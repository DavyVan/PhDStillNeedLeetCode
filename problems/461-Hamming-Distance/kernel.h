#ifndef __461_KERNEL_H__
#define __461_KERNEL_H__

#include <string>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        const int MASK = 0b1;
        int d = 0;
        int t = x ^ y;
        for (int i = 0; i < 32; i++) {
            d += t & MASK;
            t >>= 1;
        }
        return d;
    }
};

#endif  // __461_KERNEL_H__