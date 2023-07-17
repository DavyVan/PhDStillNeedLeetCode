#ifndef __485_KERNEL_H__
#define __485_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int currentOnes = 0;
        for (int e : nums) {
            if (e == 1) {
                currentOnes++;
            } else {
                if (currentOnes > maxOnes) {
                    maxOnes = currentOnes;
                }
                currentOnes = 0;
            }
        }
        if (currentOnes > maxOnes) {
            maxOnes = currentOnes;
        }

        return maxOnes;
    }
};

#endif  // __485_KERNEL_H__