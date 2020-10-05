#include "kernel.h"
#include <stdlib.h>
#include <string.h>

int* getRow(int rowIndex, int* returnSize)
{
    *returnSize = rowIndex+1;
    int *ret = (int*) malloc(sizeof(int) * (*returnSize));
    int t, current_sum;

    if (rowIndex < 0)
        return NULL;
    else if (rowIndex == 0)
    {
        ret[0] = 1;
        return ret;
    }
    else if (rowIndex == 1)
    {
        ret[0] = 1;
        ret[1] = 1;
        return ret;
    }
    else 
    {
        ret[0] = 1;
        ret[1] = 1;
    }
    
    // >=2
    for (int row = 2; row <= rowIndex; row++)
    {
        t = ret[0];
        for (int i = 1; i < row; i++)
        {
            current_sum = ret[i] + t;
            t = ret[i];
            ret[i] = current_sum;
        }
        ret[row] = 1;
    }
    return ret;
}