#include "kernel.h"
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int *ret = (int*) malloc(sizeof(int) * 2);
    *returnSize = 2;

    int first = 0, second = numbersSize-1;
    while (first < second)
    {
        int t = numbers[first] + numbers[second];
        if (t == target)
        {
            ret[0] = first+1;
            ret[1] = second+1;
            return ret;
        }
        else if (t > target)
        {
            second--;
        }
        else
        {
            first++;
        }
    }
    return NULL;    // should not reach here
}