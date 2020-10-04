#include "kernel.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    if (numRows == 0)
    {
        *returnSize = 0;
        return NULL;
    }

    // allocation
    *returnSize = numRows;
    *returnColumnSizes = (int*) malloc(sizeof(int) * numRows);
    int **ret = (int**) malloc(sizeof(int*) * numRows);

    for (int i = 0; i < numRows; i++)
    {
        (*returnColumnSizes)[i] = i+1;
        ret[i] = (int*) malloc(sizeof(int) * (i+1));
        memset(ret[i], 0, sizeof(int) * (i+1));
    }

    // compute
    ret[0][0] = 1;  // Row 1
    if (numRows == 1)
        return ret;
    
    ret[1][0] = 1; ret[1][1] = 1;   // Row 2
    for (int i = 2; i < numRows; i++)
    {
        ret[i][0] = 1;
        for (int j = 1; j < i; j++)
        {
            ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
        }
        ret[i][i] = 1;
    }
    return ret;
}