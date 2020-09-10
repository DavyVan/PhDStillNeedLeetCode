#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 10000

int main()
{
    char *s = (char*) malloc(CHAR_SIZE);
    memset(s, 0, CHAR_SIZE);

    while (fgets(s, CHAR_SIZE, stdin))
    {
        printf("%d\n", lengthOfLastWord(s));
        memset(s, 0, CHAR_SIZE);
    }
}