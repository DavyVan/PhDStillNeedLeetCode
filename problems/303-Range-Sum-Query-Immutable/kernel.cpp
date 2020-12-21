#include "kernel.h"

NumArray::NumArray(vector<int>& nums)
{
    this->nums = &nums;
}

// Brute-force, may be TLE (I got it accepted)
int NumArray::sumRange(int i, int j)
{
    int sum = 0;
    for (int x = i; x <= j; x++)
        sum += (*nums)[x];
    return sum;
}