#include "kernel.h"

int searchInsert(int* nums, int numsSize, int target)
{
    if (numsSize == 0)
        return 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
            return i;
        // else if (target > nums[i] && (i+1 >= numsSize || target < nums[i+1]))
        //     return i+1;
        else if (target < nums[i])
            return i;
        else if (target > nums[i] && i+1 >= numsSize)
            return i+1;
    }
    return -1;  // never reach here
}