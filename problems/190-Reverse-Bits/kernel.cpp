#include "kernel.h"

uint32_t reverseBits(uint32_t n)
{
    uint32_t ret = 0;
    const uint32_t mask = 0x00000001;
    uint32_t t;

    for (int i = 0; i < 32; i++)
    {
        t = n & mask;
        n >>= 1;
        ret <<= 1;
        ret |= t;
    }
    return ret;
}