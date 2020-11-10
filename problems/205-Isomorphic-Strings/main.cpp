#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    printf("input <length>: ");
    while (scanf("%d", &len))
    {
        getchar();
        char *s = (char*) malloc(len+2);
        memset(s, 0, len+2);
        char *t = (char*) malloc(len+2);
        memset(t, 0, len+2);
        printf("Input <s>: ");
        fgets(s, len+2, stdin);
        fflush(stdin);
        printf("Input <t>: ");
        fgets(t, len+2, stdin);
        fflush(stdin);

        printf(isIsomorphic(s, t) ? "True\n" : "False\n");
        free(s);
        free(t);
        printf("input <length>: ");
    }
}