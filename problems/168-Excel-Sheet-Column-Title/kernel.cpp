#include "kernel.h"
#include <stdlib.h>
#include <string.h>

char * convertToTitle(int n)
{
    char *ret = (char*) malloc(100);
    memset(ret, 0, 100);

    // find the length
    int len = 0;
    for (int t = n; t > 0; t /= 26)
    {
        len++;
        if (t % 26 == 0)
            t -= 26;
    }

    int t = n;
    while (len > 0)
    {
        int remainder = t % 26;
        if (remainder == 0 && t / 26 > 0)
        {
            ret[--len] = 'Z';
            t -= 26;
        }
        else
            ret[--len] = 'A' + remainder - 1;
        
        t /= 26;
    }

    return ret;
}