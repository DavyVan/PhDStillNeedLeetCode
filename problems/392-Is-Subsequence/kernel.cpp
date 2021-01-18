#include "kernel.h"

bool isSubsequence(char * s, char * t)
{
    int si = 0;
    for (int ti = 0; t[ti] != '\0' && t[ti] != '\n'; ti++)
    {
        if (s[si] == t[ti])
        {
            si++;
        }
    }

    if (s[si] == '\0' || s[si] == '\n')
        return true;
    return false;
}