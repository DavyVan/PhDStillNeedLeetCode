#include "kernel.h"
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val)
{
    if (numsSize == 0)
        return 0;

    int ptr = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            continue;
        }
        else
        {
            nums[ptr++] = nums[i];
        }
        
    }
    return ptr;
}