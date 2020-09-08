#include "kernel.h"
#include <stdlib.h>
#include <string.h>

#define CHAR_SIZE 5000
const char* digit[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

// Caller need to free the returned string.
char * countAndSay(int n)
{
    char *ret = (char*) malloc(CHAR_SIZE);
    memset(ret, 0, CHAR_SIZE);
    
    if (n == 1)
    {
        ret[0] = '1';
        return ret;
    }

    char *prev = countAndSay(n - 1);

    char *last = (char*) malloc(2); last[1] = '\0';
    last[0] = prev[0];
    int count = 1;
    for (int i = 1; prev[i] != '\0'; i++)
    {
        if (prev[i] == last[0])
        {
            count++;
            continue;
        }
        else
        {
            strcat(ret, digit[count]);
            strcat(ret, last);
            last[0] = prev[i];
            count = 1;
        }
        
    }
    strcat(ret, digit[count]);
    strcat(ret, last);

    free(prev);
    return ret;
}