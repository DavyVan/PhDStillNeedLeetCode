#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

#define CHAR_SIZE 1000

int main()
{
    char haystack[CHAR_SIZE+1];
    char needle[CHAR_SIZE+1];

    while (fgets(haystack, CHAR_SIZE, stdin))
    {
        fgets(needle, CHAR_SIZE, stdin);
        printf("input: %s %s", haystack, needle);
        printf("%d\n", strStr(haystack, needle));
    }
}