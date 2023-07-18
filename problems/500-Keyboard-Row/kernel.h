#ifndef __500_KERNEL_H__
#define __500_KERNEL_H__

#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_set<char>> rows(3);
        vector<string> rows_str = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < 3; i++) {
            string s = rows_str[i];
            for (char c : s) {
                rows[i].insert(c);
            }
        }

        vector<string> result;
        for (string w : words) {
            int r = -1;
            for (char c : w) {
                int _r;
                for (int i = 0; i < 3; i++) {
                    if (rows[i].find(static_cast<char>(tolower(static_cast<unsigned char>(c)))) != rows[i].end()) {
                        _r = i;
                    }
                }
                if (r == -1) {
                    r = _r;
                } else if (_r != r) {
                    r = -1;
                    break;
                }
            }

            if (r != -1) {
                result.push_back(w);
            }
        }

        return result;
    }
};

#endif  // __500_KERNEL_H__