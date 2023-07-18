#ifndef __507_KERNEL_H__
#define __507_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
// using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int i = 1; i <= num/2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            return true;
        }
        return false;
    }
};

#endif  // __507_KERNEL_H__