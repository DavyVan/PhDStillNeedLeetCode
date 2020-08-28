#include "kernel.h"
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for(int i = 0; i < numsSize; i++)   // first num
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                int *ret = (int*) malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    return NULL;
}