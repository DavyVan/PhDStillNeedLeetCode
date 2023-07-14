#ifndef __409_KERNEL_H__
#define __409_KERNEL_H__

#include <string>
#include <array>
#include <cstdint>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int len = s.length();
        int result = 0;
        array<int, 52> alphabet;
        alphabet.fill(0);

        for (int i = 0; i < len; i++) {
            int8_t d = s[i] - 'a';
            if (d < 0) {
                d = s[i] - 'A' + 26;
            }
            alphabet[d]++;
        }

        int palindromLen = 0;
        int hasOdd = 0;
        for (int i = 0; i < 52; i++) {
            if (alphabet[i] % 2 == 0) {
                palindromLen += alphabet[i];
            } else {
                hasOdd = 1;
                if (alphabet[i] > 2) {
                    palindromLen += alphabet[i]-1;
                }
            }
        }
        palindromLen += hasOdd;

        return palindromLen;
    }
};

#endif  // __409_KERNEL_H__