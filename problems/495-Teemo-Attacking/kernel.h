#ifndef __495_KERNEL_H__
#define __495_KERNEL_H__

#include <vector>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.size() == 1) {
            return duration;
        }

        int total = 0;
        int size = timeSeries.size();
        for (int i = 1; i < size; i++) {
            if (timeSeries[i] > timeSeries[i-1]+duration-1) {
                total += duration;
            } else {
                total += timeSeries[i] - timeSeries[i-1];
            }
        }
        total += duration;

        return total;
    }
};

#endif  // __495_KERNEL_H__