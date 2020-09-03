#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    while (scanf("%d", &size))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        for (int i = 0 ; i < size; i++)
            scanf("%d", &nums[i]);

        int ret = removeDuplicates(nums, size);

        printf("%d\n", ret);
        for (int i = 0; i < ret; i++)
            printf("%d ", nums[i]);
        printf("\n");
    }
}