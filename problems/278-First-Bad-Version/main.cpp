#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    // extern static int bad;
    printf("Input <n> <bad>: ");
    while (scanf("%d %d", &n, &bad))
    {
        printf("%d\n", firstBadVersion(n));
        printf("%d %d %d\n", isBadVersion(3), isBadVersion(4), isBadVersion(5));
        printf("Input <n> <bad>: ");
    }
}