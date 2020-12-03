#include "kernel.h"

// use the formula of digital root
int addDigits(int num)
{
    if (num == 0)
        return 0;
    return 1 + (num-1) % 9;
}