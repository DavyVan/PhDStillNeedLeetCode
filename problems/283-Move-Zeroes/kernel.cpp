#include "kernel.h"
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize)
{
    if (nums == NULL || numsSize == 0)
        return;

    int front = 0;
    int tail = 0;

    for (front = 0; front < numsSize; front++)
    {
        if (nums[front] == 0)
        {
            continue;
        }
        else
        {
            nums[tail++] = nums[front];
        }
        
    }

    // handle tail
    for (; tail < numsSize; tail++)
    {
        nums[tail] = 0;
    }
}