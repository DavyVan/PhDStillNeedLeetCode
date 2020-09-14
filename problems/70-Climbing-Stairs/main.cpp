#include "kernel.h"
#include <stdio.h>

int main()
{
    int n;

    printf("Input <n>: ");
    while (scanf("%d", &n))
    {
        printf("Recursive Solution: %d\n", climbStairs_recursive(n));
        printf("DP / Fibonacci Solution: %d\n", climbStairs_dp(n));
        printf("Input <n>: ");
    }
}