#include "kernel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 1000

int main()
{
    char *ransomNote = (char*) malloc(MAX_STR_LEN);
    char *magazine = (char*) malloc(MAX_STR_LEN);
    memset(ransomNote, 0, MAX_STR_LEN);
    memset(magazine, 0, MAX_STR_LEN);

    printf("Input <ransom note>: ");
    while (fgets(ransomNote, MAX_STR_LEN, stdin))
    {
        printf("Input <magazine>: ");
        fgets(magazine, MAX_STR_LEN, stdin);
        printf(canConstruct(ransomNote, magazine) ? "True\n" : "False\n");
        memset(ransomNote, 0, MAX_STR_LEN);
        memset(magazine, 0, MAX_STR_LEN);
        printf("Input <ransom note>: ");
    }
}