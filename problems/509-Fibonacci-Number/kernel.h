#ifndef __509_KERNEL_H__
#define __509_KERNEL_H__

// #include <string>
// #include <vector>
// #include <map>
// using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
};

#endif  // __509_KERNEL_H__