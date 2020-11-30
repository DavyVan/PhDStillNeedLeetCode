#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX_LEN 1000

int main()
{
    char* s = (char*) malloc(STR_MAX_LEN);
    char* t = (char*) malloc(STR_MAX_LEN);
    memset(s, 0, STR_MAX_LEN);
    memset(t, 0, STR_MAX_LEN);

    printf("Input <s>: ");
    while (fgets(s, STR_MAX_LEN-1, stdin))
    {
        printf("Input <t>: ");
        fgets(t, STR_MAX_LEN-1, stdin);
        printf(isAnagram(s, t) ? "True\n" : "False\n");
        memset(s, 0, STR_MAX_LEN);
        memset(t, 0, STR_MAX_LEN);
        printf("Input <s>: ");
    }
}