#include "kernel.h"

int titleToNumber(char * s)
{
    int ret = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        ret *= 26;
        ret += s[i] - 'A' + 1;
    }
    return ret;
}