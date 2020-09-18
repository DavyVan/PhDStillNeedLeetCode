#include "kernel.h"

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    // Key idea: scan from the tail
    int tail_merged = m + n - 1;
    int tail_1 = m - 1;
    int tail_2 = n - 1;

    int *remains;
    int tail_remains;

    while (tail_1 >= 0 && tail_2 >= 0)
    {
        if (nums1[tail_1] > nums2[tail_2])
        {
            nums1[tail_merged--] = nums1[tail_1--];
        }
        else
        {
            nums1[tail_merged--] = nums2[tail_2--];
        }
    }

    if (tail_1 == -1)
    {
        remains = nums2;
        tail_remains = tail_2;
    }
    else
    {
        remains = nums1;
        tail_remains = tail_1;
    }

    while (tail_remains >= 0)
    {
        nums1[tail_merged--] = remains[tail_remains--];
    }
    
}