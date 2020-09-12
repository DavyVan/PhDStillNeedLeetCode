#include "kernel.h"
#include <stdio.h>

int mySqrt(int x)
{
    double g = x;
    while (g*g - x > 0.001)
    {
        g = (g+x/g)/2;
    }
    // printf("%lf\n", g);
    return (int)g;
}