#include "kernel.h"

int trailingZeroes(int n)
{
    int t = n;
    int ret = 0;
    while (t != 0)
    {
        t /= 5;
        ret += t;
    }
    return ret;
}