#include <limits.h>
#include "kernel.h"
#include <stdio.h>

int reverse(int x)
{
    int sign = 1;
    long long t = x;
    long long result = 0;

    if (x < 0)
    {
        sign = -1;
        t = (long long)x * -1;
    }
    
    while (t != 0)
    {
        result = t % 10 + result * 10;
        t /= 10;
    }
    printf("%lld\n", result);
    if (result > INT_MAX && sign == 1)
        return 0;
    else if (result -1 > INT_MAX && sign == -1)
        return 0;
    return result * sign;
}