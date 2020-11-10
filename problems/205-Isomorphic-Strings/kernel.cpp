#include "kernel.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void normalize(char* in, char** out)
{
    char map[128] = {0};
    char next = 1;
    
    // allocate out
    int len = 0;
    for (; in[len] != '\0' && in[len] != '\n'; len++);
    *out = (char*) malloc(sizeof(char) * (len+1));
    memset(*out, 0, len+1);

    for (int i = 0; in[i] != '\0' && in[i] != '\n'; i++)
    {
        if (map[in[i]] == 0)
            map[in[i]] = next++;
        
        (*out)[i] = map[in[i]];
    }
}

bool isIsomorphic(char * s, char * t)
{
    if (s == NULL && t == NULL)
        return true;
    char *s_normalized, *t_normalized;
    normalize(s, &s_normalized);
    normalize(t, &t_normalized);
    // printf("%s\n", s_normalized);
    // printf("%s\n", t_normalized);
    return strcmp(s_normalized, t_normalized) == 0;
    // free
}