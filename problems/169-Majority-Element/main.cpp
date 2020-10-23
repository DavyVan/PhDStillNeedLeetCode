#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <num size>: ");
    while (scanf("%d", &size))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        int ret = majorityElement(nums, size);
        printf("%d\n", ret);
        free(nums);
        printf("Input <num size>: ");
    }
}