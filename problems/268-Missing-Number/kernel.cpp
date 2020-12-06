#include "kernel.h"

int missingNumber(int* nums, int numsSize)
{
    int missing = 0;
    for (int i = 0; i < numsSize; i++)
    {
        missing ^= i ^ nums[i];
    }
    return missing ^ numsSize;
}