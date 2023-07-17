#ifndef __492_KERNEL_H__
#define __492_KERNEL_H__

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int _sqrt = static_cast<int>(sqrt(area));
        
        for (int i = _sqrt; i <= area/2; i++) {
            if (area % i == 0 && i >= area/i) {
                return vector<int>({i, area/i});
            }
        }
        return vector<int>({area, 1});
    }
};

#endif  // __492_KERNEL_H__