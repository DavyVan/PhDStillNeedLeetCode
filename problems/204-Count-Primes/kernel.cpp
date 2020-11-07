#include "kernel.h"
#include <stdlib.h>
#include <string.h>

int countPrimes(int n)
{
    if (n == 0)
        return 0;

    bool *mask = (bool*) malloc(sizeof(bool) * n);
    memset(mask, 0, sizeof(bool) * n);

    // filter
    // 0, 1 are not prime number
    for (int i = 2; i < n; i++)
    {
        // find the next prime number
        if (mask[i] == true)
            continue;
        
        for (int j = i*2; j < n; j += i)
            mask[j] = true;
    }

    // count
    int num = 0;
    for (int i = 2; i < n; i++)
    {
        if (mask[i] == false)
            num++;
    }

    free(mask);
    return num;
}