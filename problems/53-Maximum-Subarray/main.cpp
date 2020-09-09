#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    while (scanf("%d", &size))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        printf("Result of brute force solution: %d\n", maxSubArray_bf(nums, size));
        printf("Result of divide-and-conquer solution: %d\n", maxSubArray_divide_and_conquer(nums, size));
        printf("Result of dynamic planning: %d\n", maxSubArray_dp(nums, size));
        free(nums);
    }
}