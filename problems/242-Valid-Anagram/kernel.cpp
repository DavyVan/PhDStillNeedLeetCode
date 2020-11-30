#include "kernel.h"
#include <string.h>

// cannot handle Unicode
bool isAnagram(char * s, char * t)
{
    if (strlen(s) != strlen(t))
        return false;

    int stat_s[26] = {0};
    int stat_t[26] = {0};

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        // s & t have same length
        stat_s[s[i] - 'a']++;
        stat_t[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (stat_s[i] != stat_t[i])
            return false;
    }
    return true;
}