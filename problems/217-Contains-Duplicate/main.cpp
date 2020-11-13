#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Input <size>: ");
    while (scanf("%d", &size))
    {
        vector<int> nums(size);
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        Solution sln;
        printf(sln.containsDuplicate(nums) ? "True\n" : "False\n");
        printf("Input <size>: ");
    }
}