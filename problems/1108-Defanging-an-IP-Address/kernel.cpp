#include "kernel.h"
#include <string.h>
#include <stdlib.h>

char* defangIPaddr(char *address)
{
    char *ret = (char*) malloc(sizeof("xxx[.]xxx[.]xxx[.]xxx\0"));
    memset(ret, 0, sizeof("xxx[.]xxx[.]xxx[.]xxx\0"));
    int i = 0, j = 0;
    while(1)
    {
        if (address[i] == '.')
        {
            ret[j++] = '[';
            ret[j++] = '.';
            ret[j++] = ']';
        }
        else if (address[i] == 0)
        {
            break;
        }
        else
        {
            ret[j++] = address[i];
        }
        i++;
    }
    return ret;
}