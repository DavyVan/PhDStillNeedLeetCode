#include "kernel.h"
#include <stdlib.h>
#include <stdio.h>

// O(mn)
int strStr(char * haystack, char * needle)
{
    if (needle[0] == '\0')
        return 0;
    for (int i = 0; haystack[i] != '\0' && haystack[i] != '\n'; i++)
    {
        bool ret = true;
        for (int j = 0; needle[j] != '\0' && needle[j] != '\n'; j++)
        {
            if (haystack[i+j] == '\n' || haystack[i+j] == '\0')
                return -1;
            if (haystack[i+j] != needle[j])
            {
                ret = false;
                break;
            }
        }
        if (ret)
            return i;
    }
    return -1;
}