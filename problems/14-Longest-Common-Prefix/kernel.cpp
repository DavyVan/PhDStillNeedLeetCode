#include "kernel.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void LCPfor2(char *common, char *target)
{
    int i = 0;
    for ( ; common[i] != '\0' && target[i] != '\0'; i++)
    {
        if (common[i] == target[i])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    common[i] = '\0';
}

char * longestCommonPrefix(char ** strs, int strsSize)
{
    char *common = (char*) malloc(sizeof(char) * 1000);
    memset(common, 0, sizeof(char) * 1000);
    if (strsSize <= 0)
    {
        return common;
    }

    strcpy(common, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        LCPfor2(common, strs[i]);
        if (strcmp(common, "") == 0)
        {
            break;
        }
    }
    return common;
}