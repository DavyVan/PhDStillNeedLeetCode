#include "kernel.h"

bool canWinNim(int n)
{
    if (n % 4 == 0)
        return false;
    return true;
}