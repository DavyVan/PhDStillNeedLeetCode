#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_MAX_SIZE 1000

int main()
{
    char *s = (char*) malloc(CHAR_MAX_SIZE);
    memset(s, 0, CHAR_MAX_SIZE);
    
    printf("Input <s> (\"EOF\" to quit): ");
    while (fgets(s, CHAR_MAX_SIZE, stdin))
    {
        if (strstr(s, "EOF"))
            break;
        
        // exclude the last \n
        int len = strlen(s);
        s[--len] = '\0';

        reverseString(s, len);
        printf("%s\n", s);

        memset(s, 0, CHAR_MAX_SIZE);
        printf("Input <s> (\"EOF\" to quit): ");
    }

    free(s);
}