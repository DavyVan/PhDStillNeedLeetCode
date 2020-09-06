#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *nums;
    int target;

    printf("Input: <size> <target>: ");
    while (scanf("%d %d", &size, &target))
    {
        printf("Input: nums: ");
        
        nums = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &nums[i]);
        }

        int ret = searchInsert(nums, size, target);

        printf("Result: %d\n", ret);
        printf("Input: <size> <target>: ");
    }
}