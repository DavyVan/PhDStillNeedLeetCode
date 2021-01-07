#include "kernel.h"

bool isPerfectSquare(int num)
{
    for (int x = 1; num > 0; x+=2)
    {
        num -= x;
    }

    if (num == 0)
        return true;
    else
        return false;
}