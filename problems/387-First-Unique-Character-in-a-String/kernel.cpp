#include "kernel.h"
#include <limits.h>
#include <stdlib.h>

int firstUniqChar(char * s)
{
    if (s == NULL)
        return -1;

    int _map[26];
    for (int i = 0; i < 26; i++)
        _map[i] = -2;

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (_map[s[i] - 'a'] == -2)  // first time
        {
            _map[s[i] - 'a'] = i;
        }
        else if (_map[s[i] - 'a'] >= 0) // second time 
        {
            _map[s[i] - 'a'] = -1;
        }
        else if (_map[s[i] - 'a'] == -1) // third+ time
        {
            continue;
        }
    }

    int index = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (_map[i] >= 0 && _map[i] < index)
            index = _map[i];
    }

    if (index == INT_MAX)
        return -1;
    return index;
}