#include "kernel.h"
#include <math.h>

int rob(int* nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    int taken = nums[0];
    int not_taken = 0;
    int i = 1;

    while (i < numsSize)
    {
        int t_not_taken = (taken > not_taken ? taken : not_taken);
        int t_taken = not_taken + nums[i];
        taken = t_taken;
        not_taken = t_not_taken;
        i++;
    }

    return (taken > not_taken ? taken : not_taken);
}