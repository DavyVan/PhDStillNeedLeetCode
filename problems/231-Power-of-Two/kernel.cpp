#include "kernel.h"
#include <intrin.h>

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n /= 2;
    }
    return true;
}

bool isPowerOfTwo_intrinsic(int n)
{
#ifndef _MSC_VER
    if (__builtin_popcount(n) != 1 || (n & 0x80000000))     // GCC built-in function
#else
    if (_mm_popcnt_u32(n) != 1 || (n & 0x80000000))
#endif
        return false;
    return true;
}