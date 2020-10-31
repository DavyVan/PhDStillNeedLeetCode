#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <size>: ");
    while (scanf("%d", &size))
    {
        int *nums = (int*) malloc(sizeof(int) * size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        printf("%d\n", rob(nums, size));
        free(nums);
        printf("Input <size>: ");
    }
}