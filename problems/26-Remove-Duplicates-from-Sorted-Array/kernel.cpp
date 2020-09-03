#include "kernel.h"

int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
        
    int unique_size = 1;
    int t = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == t)
            continue;
        else
        {
            t = nums[unique_size++] = nums[i];
        }
    }
    return unique_size;
}