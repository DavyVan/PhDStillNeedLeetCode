#include "kernel.h"

char findTheDifference(char * s, char * t)
{
    int s_stat[26] = {0}, t_stat[26] = {0};

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        s_stat[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0' && t[i] != '\n'; i++)
    {
        t_stat[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (s_stat[i] != t_stat[i])
            return i + 'a';
    }
    return 0; // unreachable
}