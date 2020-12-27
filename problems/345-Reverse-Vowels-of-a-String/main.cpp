#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1000

int main()
{
    char *s = (char*) malloc(MAX_STR_LEN);
    printf("Input <s> (\"EOF\" to quit): ");
    while (fgets(s, MAX_STR_LEN, stdin))
    {
        if (strstr(s, "EOF"))
            break;
        
        // exclude the \n
        int len = strlen(s);
        s[--len] = '\0';

        s = reverseVowels(s);
        printf("%s\n", s);
        printf("Input <s> (\"EOF\" to quit): ");
    }
}