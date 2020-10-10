#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 10000

int main()
{
    char *in = (char*) malloc(sizeof(char) * MAX_SIZE);
    printf("Input <string>: ");
    while (fgets(in, MAX_SIZE, stdin))
    {
        printf((isPalindrome(in) ? "True\n" : "False\n"));
        printf("Input <string>: ");
    }

    free(in);
}