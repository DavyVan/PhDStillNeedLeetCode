#include "kernel.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    if (numsSize == 0)
    {
        *returnSize = 0;
        return NULL;
    }

    char** ret = (char**) malloc(sizeof(char*) * 20);
    memset(ret, 0, sizeof(char*) * 20);

    *returnSize = 0;
    int range_start = nums[0];
    int range_end = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == range_end+1)  // range extended
        {
            range_end++;
        }
        else
        {
            // range end
            ret[*returnSize] = (char*) malloc(50);
            if (range_start == range_end)
            {
                sprintf(ret[*returnSize], "%d", range_start);
            }
            else
            {
                sprintf(ret[*returnSize], "%d->%d", range_start, range_end);
            }
            (*returnSize)++;
            range_start = range_end = nums[i];
        }
    }
    ret[*returnSize] = (char*) malloc(50);
    if (range_start == range_end)
    {
        sprintf(ret[*returnSize], "%d", range_start);
    }
    else
    {
        sprintf(ret[*returnSize], "%d->%d", range_start, range_end);
    }
    (*returnSize)++;
    return ret;
}