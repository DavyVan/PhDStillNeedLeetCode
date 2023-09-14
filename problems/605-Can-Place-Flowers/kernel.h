#ifndef __605_KERNEL_H__
#define __605_KERNEL_H__

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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        if (n == 0) {
            return true;
        } else if (n > (size+1)/2) {
            return false;
        }

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 1) {
                continue;
            }

            bool right = i-1 < 0 || (i-1 >= 0 && flowerbed[i-1] == 0);
            bool left = i+1 >= size || (i+1 < size && flowerbed[i+1] == 0);

            if (right && left) {
                flowerbed[i] = 1;
                n--;
                if (n == 0) {
                    break;
                }
            }
        }

        return n == 0;
    }
};

#endif  // __605_KERNEL_H__