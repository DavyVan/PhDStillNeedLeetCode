#include "kernel.h"

int hammingWeight(uint32_t n)
{
    int ret = 0;
    uint32_t mask = 0x00000001;
    uint32_t t;

    while (n != 0)
    {
        t = n & mask;
        if (t != 0)
            ret++;
        n >>= 1;
    }
    return ret;
}