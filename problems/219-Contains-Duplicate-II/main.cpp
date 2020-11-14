#include "kernel.h"
#include <cstdio>
#include <cstdlib>

int main()
{
    int size, k;
    printf("Input <size> <k>: ");
    while (scanf("%d %d", &size, &k))
    {
        vector<int> nums(size);
        printf("Input <nums>...: ");
        for (int i = 0; i < size; i++)
            scanf("%d", &nums[i]);

        Solution sln;
        printf(sln.containsNearbyDuplicate(nums, k) ? "True\n" : "False\n");
        printf("Input <size> <k>: ");
    }
}
