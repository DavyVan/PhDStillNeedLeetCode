#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, val, ret;
    int *nums;

    while (scanf("%d %d", &size, &val))
    {
        nums = (int*) malloc(sizeof(int) * size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &nums[i]);
        }

        ret = removeElement(nums, size, val);

        for (int i = 0; i < ret; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n");
        free(nums);
    }
}