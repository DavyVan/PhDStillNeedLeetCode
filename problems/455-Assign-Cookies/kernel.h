#ifndef __455_KERNEL_H__
#define __455_KERNEL_H__

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // sort asc
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;  // g
        int j = 0;  // s
        int count = 0;
        int lg = g.size();
        int ls = s.size();
        while (i < lg && j < ls) {
            if (s[j] >= g[i]) {
                // assignable
                count++;
                j++;
                i++;
            } else {
                j++;
            }
        }

        return count;
    }
};

#endif  // __455_KERNEL_H__