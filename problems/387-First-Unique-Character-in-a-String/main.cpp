#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1000

int main()
{
    char *s = (char*) malloc(MAX_STR_LEN);
    memset(s, 0, MAX_STR_LEN);
    printf("Input <s>: ");
    while (fgets(s, MAX_STR_LEN, stdin))
    {
        printf("%d\n", firstUniqChar(s));
        printf("Input <s>: ");
    }
}