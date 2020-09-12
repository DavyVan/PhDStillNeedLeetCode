#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int size_a, size_b;

    printf("Input <size_a> <size_b>: ");
    while (scanf("%d %d", &size_a, &size_b))
    {
        getchar();    // consume \n
        char *a, *b;
        a = (char*) malloc(size_a+1);
        b = (char*) malloc(size_b+1);
        memset(a, 0, size_a+1);
        memset(b, 0, size_b+1);

        printf("Input <a...>: ");
        for (int i = 0; i < size_a; i++)
            scanf("%c", &a[i]);
        getchar();    // consume \n

        printf("Input <b...>: ");
        for (int i = 0; i < size_b; i++)
            scanf("%c", &b[i]);
        getchar();    // consume \n

        char *ret = addBinary(a, b);

        for (int i = 0; ret[i] != '\0'; i++)
            printf("%c", ret[i]);
        printf("\n");
        free(ret);

        printf("Input: <size_a> <size_b>: ");
    }
}