#ifndef __506_KERNEL_H__
#define __506_KERNEL_H__

#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, string, greater<int>> m;
        for (int x : score) {
            m.insert({x, ""});
        }
        int i = 1;
        for (auto it = m.begin(); it != m.end(); it++, i++) {
            switch (i) {
            case 1:
                m[it->first] = "Gold Medal";
                break;
            case 2:
                m[it->first] = "Silver Medal";
                break;
            case 3:
                m[it->first] = "Bronze Medal";
                break;
            default:
                m[it->first] = to_string(i);
            }
        }

        vector<string> result;
        for (int x : score) {
            result.push_back(m[x]);
        }

        return result;
    }
};

#endif  // __506_KERNEL_H__