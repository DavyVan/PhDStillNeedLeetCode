#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *in = (char*) malloc(sizeof(char) * 10001);
    while (fgets(in, 10000, stdin))
    {
        printf(isValid(in) ? "True\n" : "False\n");
        memset(in, 0, sizeof(char) * 10001);
    }

    free(in);
}