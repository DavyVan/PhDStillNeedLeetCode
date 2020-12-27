#include "kernel.h"
#include <string.h>

char * reverseVowels(char * s)
{
    if (s == NULL)
        return NULL;
    
    int len = strlen(s);
    if (len <= 1)
        return s;

    int start = 0;
    int end = len - 1;
    char t;

    while (true)
    {
        // find the next vowel for start and end
        while (s[start] != 'a' && s[start] != 'e' && s[start] != 'i' && s[start] != 'o' && s[start] != 'u'
                && s[start] != 'A' && s[start] != 'E' && s[start] != 'I' && s[start] != 'O' && s[start] != 'U')
        {
            start++;
            if (start >= len)
                break;
        }
        while (s[end] != 'a' && s[end] != 'e' && s[end] != 'i' && s[end] != 'o' && s[end] != 'u'
                && s[end] != 'A' && s[end] != 'E' && s[end] != 'I' && s[end] != 'O' && s[end] != 'U')
        {
            end--;
            if (end < 0)
                break;
        }

        if (start >= end)
            break;

        t = s[end];
        s[end] = s[start];
        s[start] = t;
        start++;
        end--;
        if (start >= len || end < 0)
            break;
    }

    return s;
}