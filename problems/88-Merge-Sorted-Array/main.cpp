#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int m, n;
    int *nums1, *nums2;
    printf("Input <m n>: ");
    while (scanf("%d %d", &m, &n))
    {
        nums1 = (int*) malloc(sizeof(int) * (m + n));
        nums2 = (int*) malloc(sizeof(int) * n);

        if (m > 0)
        {
            printf("Input nums1: ");
            for (int i = 0; i < m; i++)
                scanf("%d", &nums1[i]);
        }
        if (n > 0)
        {
            printf("Input nums2: ");
            for (int i = 0; i < n; i++)
                scanf("%d", &nums2[i]);
        }

        merge(nums1, m+n, m, nums2, n, n);

        for (int i = 0; i < m+n; i++)
            printf("%d ", nums1[i]);
        printf("\n");
    }
}