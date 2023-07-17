#ifndef __496_KERNEL_H__
#define __496_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();

        vector<int> result;
        
        for (int i = 0; i < l1; i++) {
            int j;
            for (j = 0; j < l2; j++) {
                if (nums1[i] == nums2[j]) {
                    break;
                }
            }

            int t = nums2[j];
            for (j++; j < l2; j++) {
                if (t < nums2[j]) {
                    result.push_back(nums2[j]);
                    break;
                }
            }
            
            if (j == l2) {
                result.push_back(-1);
                continue;
            }
        }

        return result;
    }
};

#endif  // __496_KERNEL_H__