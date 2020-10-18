#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

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

        printf("Input <target>: ");
        int target;
        scanf("%d", &target);

        int ret_size;
        int *ret = twoSum(nums, size, target, &ret_size);
        printf("%d %d\n", ret[0], ret[1]);

        free(ret);
        printf("Input <size>: ");
    }
}