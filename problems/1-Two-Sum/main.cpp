#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numSize, target;
    int *nums, *ret;

    printf("Input: <numSize> <nums>... <target>\n");

    while (scanf("%d", &numSize))
    {
        nums = (int*) malloc(sizeof(int) * numSize);
        for (int i = 0; i < numSize; i++)
        {
            scanf("%d", &nums[i]);
        }
        scanf("%d", &target);

        ret = twoSum(nums, numSize, target, NULL);
        printf("%d %d\n", ret[0], ret[1]);

        free(ret);
        free(nums);
    }
}