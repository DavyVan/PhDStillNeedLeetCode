#ifndef __441_KERNEL_H__
#define __441_KERNEL_H__

// #include <string>
// using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int c = 0;
        for (int i = 1; n > 0; n-=i, i++, c++) {}
        if (n < 0) c--;
        return c;
    }
};

#endif  // __441_KERNEL_H__