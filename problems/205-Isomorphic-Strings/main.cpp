#include "kernel.h"
#include <stdlib.h>
#define __STDC_WANT_LIB_EXT1__
#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    printf("input <length>: ");
    while (scanf("%d", &len))
    {
        getchar();
        char *s = (char*) malloc(len+1);
        memset(s, 0, len+1);
        char *t = (char*) malloc(len+1);
        memset(t, 0, len+1);
        printf("Input <s>: ");
        gets_s(s, len+1);
        printf("Input <t>: ");
        gets_s(t, len+1);

        printf(isIsomorphic(s, t) ? "True\n" : "False\n");
        free(s);
        free(t);
        printf("input <length>: ");
    }
}