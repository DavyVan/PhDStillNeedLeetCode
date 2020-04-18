#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *in = (char*) malloc(sizeof("xxx[.]xxx[.]xxx[.]xxx\0"));
    // printf("bbbbb");

    while (scanf("%s", in))
    {
        // printf("aaaaa");
        // printf("%s\n", in);
        char* out = defangIPaddr(in);
        printf("%s\n", out);
        fflush(stdout);
        free(out);
    }
    free(in);
    return 0;
}