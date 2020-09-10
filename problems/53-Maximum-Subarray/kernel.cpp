#include "kernel.h"
#include <stdlib.h>
#include <limits.h>

int maxSubArray(int* nums, int numsSize)
{
    return maxSubArray_dp(nums, numsSize);
}

// Time Limit Exceeded
int maxSubArray_bf(int* nums, int numsSize)
{
    int max = INT_MIN;

    for (int k = 1; k <=numsSize; k++)
    {
        for (int i = k-1; i < numsSize; i++)
        {
            int t = 0;
            for (int j = 0; j < k; j++)
                t += nums[i-j];

            if (t > max)
                max = t;
        }
    }
    return max;
}

int maxSubArray_divide_and_conquer(int* nums, int numsSize)
{
    if (numsSize == 0)
        return INT_MIN;
    if (numsSize == 1)
        return nums[0];

    int mid = numsSize / 2; // use this as index
    int max_left = maxSubArray_divide_and_conquer(nums, mid);
    int max_right = maxSubArray_divide_and_conquer(&nums[mid+1], numsSize-mid-1);

    // explore left
    int t_mid = nums[mid];
    int max_mid = t_mid;
    for (int i = mid-1; i >=0; i--)
    {
        t_mid += nums[i];
        if (max_mid < t_mid)
            max_mid = t_mid;
    }
    // explore right
    t_mid = max_mid;
    for (int i = mid+1; i < numsSize; i++)
    {
        t_mid += nums[i];
        if (max_mid < t_mid)
            max_mid = t_mid;
    }

    // return the max among three
    int max = (max_mid > max_left ? max_mid : max_left);
    max = (max > max_right ? max : max_right);
    return max;
}

int maxSubArray_dp(int* nums, int numsSize)
{
    int current_max, max;
    current_max = max = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (current_max + nums[i] > nums[i])
            current_max += nums[i];
        else
            current_max = nums[i];
        if (current_max > max)
            max = current_max;
    }
    return max;
}