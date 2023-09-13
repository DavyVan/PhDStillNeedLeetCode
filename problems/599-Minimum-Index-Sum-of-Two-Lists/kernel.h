#ifndef __599_KERNEL_H__
#define __599_KERNEL_H__

#include <string>
#include <vector>
// #include <map>
// #include <cmath>
// #include <algorithm>
#include <limits>
// #include <sstream>
// #include <iostream>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int size1 = list1.size();
        int size2 = list2.size();

        int minl = numeric_limits<int>::max();
        vector<string> common;

        for (int i = 0; i < size1; i++) {
            for (int j = 0; j < size2; j++) {
                if (i+j < minl && list1[i] == list2[j]) {
                    minl = i+j;
                    common.clear();
                    common.push_back(list1[i]);
                } else if (i+j == minl && list1[i] == list2[j]) {
                    common.push_back(list1[i]);
                }
            }
        }
        return common;
    }
};

#endif  // __599_KERNEL_H__