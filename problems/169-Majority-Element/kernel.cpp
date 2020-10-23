#include "kernel.h"

// Boyer-Moor Voting Algorithm
int majorityElement(int* nums, int numsSize)
{
    int counter = 1;
    int candidate = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (counter == 0)
        {
            counter = 1;
            candidate = nums[i];
        }
        else
        {
            counter += (nums[i] == candidate ? 1 : -1);
        }
        
    }

    return candidate;
}