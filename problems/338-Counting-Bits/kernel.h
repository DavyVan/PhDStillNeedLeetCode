#ifndef __338_KERNEL_H__
#define __338_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n+1);
        ret[0] = 0;

        if (n >= 1) {
            ret[1] = 1;
        }

        int powerOf2 = 1;
        for (int i = 2; i <= n; i++)
        {
            if (i / powerOf2 == 2)
            {
                ret[i] = 1;
                powerOf2 *= 2;
            }
            else
            {
                ret[i] = 1 + ret[i-powerOf2];
            }
        }

        return ret;
    }
};

#endif  // __338_KERNEL_H__