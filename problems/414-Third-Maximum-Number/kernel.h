#ifndef __414_KERNEL_H__
#define __414_KERNEL_H__

#include <vector>
#include <array>
#include <cstdint>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        array<int64_t, 3> max3;
        max3.fill(INT32_MIN-1l);

        for (auto it = nums.begin(); it < nums.end(); it++) {
            // update arrays
            updateArrays(max3, *it);
        }

        return (max3[2] == INT32_MIN-1l ? max3[0] : max3[2]);
    }

    void updateArrays(array<int64_t, 3>& max3, int x) {
        for (int i = 0 ; i < 3; i++) {
            if (x > max3[i]) {
                for (int j = 2; j > i; j--) {
                    max3[j] = max3[j-1];
                }
                max3[i] = x;
                break;
            } else if (x == max3[i]) {
                break;      // do nothing
            } else if (x < max3[i]) {
                continue;
            }
        }
    }
};

#endif  // __414_KERNEL_H__