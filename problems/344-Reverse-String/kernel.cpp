#include "kernel.h"

void reverseString(char* s, int sSize)
{
    char t;
    int start = 0;
    int end = sSize-1;
    while (start <= end)
    {
        t = s[end];
        s[end] = s[start];
        s[start] = t;
        start++;
        end--;
    }
}