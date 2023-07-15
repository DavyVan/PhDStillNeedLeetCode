#ifndef __448_KERNEL_H__
#define __448_KERNEL_H__

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;

        int prev = 0;
        for (int n : nums) {
            if (n == prev) {
                continue;
            } else if (n == prev + 1) {
                prev++;
                continue;
            } else {
                insertBetween(result, prev, n);
                prev = n;
            }
        }
        if (prev < nums.size()) {
            insertBetween(result, prev, nums.size()+1);
        }

        return result;
    }

    void insertBetween(vector<int>& ret, int start, int end) {
        for (int i = start+1; i < end; i++) {
            ret.push_back(i);
        }
    }
};

#endif  // __448_KERNEL_H__