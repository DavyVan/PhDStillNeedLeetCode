#ifndef __516_KERNEL_H__
#define __516_KERNEL_H__

#include <string>
#include <cmath>
#include <vector>
// #include <map>
using namespace std;

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int l = s.length();

        if (l == 1) return 1;

        vector<vector<int>> t(l, vector<int>(l, 0));
        t[0][0] = 1;

        int maxp = 1;
        for (int i = 1; i < l; i++) {
            t[i][i] = 1;
            for (int j = i-1; j >= 0; j--) {
                if (s[i] == s[j]) {
                    t[j][i] = max(2+t[j+1][i-1], max(t[j][i-1], t[j+1][i]));
                } else {
                    t[j][i] = max(t[j][i-1], t[j+1][i]);
                }

                if (t[j][i] > maxp) {
                    maxp = t[j][i];
                }
            }
        }

        return maxp;
    }
};

#endif  // __516_KERNEL_H__