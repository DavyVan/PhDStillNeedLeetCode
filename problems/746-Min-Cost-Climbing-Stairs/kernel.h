#ifndef __746_KERNEL_H__
#define __746_KERNEL_H__

// #include <string>
#include <vector>
// #include <map>
#include <cmath>
// #include <limits>
// #include "../../utils/binary_tree.h"
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        cost.push_back(0);
        // reuse input parameter cost
        
        if (size == 2) return min(cost[0], cost[1]);
        
        for (int i = 2; i < size+1; i++) {
            cost[i] = min(cost[i-1]+cost[i], cost[i-2]+cost[i]);
        }
        return cost[size];
    }
};

#endif  // __746_KERNEL_H__