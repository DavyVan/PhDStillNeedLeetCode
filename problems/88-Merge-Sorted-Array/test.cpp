#include "kernel.h"
#include <gtest/gtest.h>

TEST(_88, _1)
{
    int m = 3;
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int n = 3;
    int nums2[] = {2, 5, 6};
    int expect_size = 6;
    int expect[] = {1, 2, 2, 3, 5, 6};

    merge(nums1, m+n, m, nums2, n, n);

    for (int i = 0; i < m+n; i++)
        EXPECT_EQ(nums1[i], expect[i]);
}

TEST(_88, _2_empty)
{
    int m = 3;
    int nums1[] = {1, 2, 3};
    int n = 0;
    int *nums2 = NULL;
    int expect_size = 3;
    int expect[] = {1, 2, 3};

    merge(nums1, m+n, m, nums2, n, n);

    for (int i = 0; i < m+n; i++)
        EXPECT_EQ(nums1[i], expect[i]);
}