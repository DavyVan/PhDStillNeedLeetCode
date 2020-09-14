#include "kernel.h"

int climbStairs(int n)
{
    return climbStairs_dp(n);
}

// Recursive Solution
// TLE when n >= 37
int climbStairs_recursive(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;

    return climbStairs(n-1) + climbStairs(n-2);
}

// DP / Fibonacci solution
int climbStairs_dp(int n)
{
    int stat[46];

    stat[0] = 1;
    stat[1] = 1;
    stat[2] = 2;

    for (int i = 3; i <= n; i++)
        stat[i] = stat[i-1] + stat[i - 2];

    return stat[n];
}