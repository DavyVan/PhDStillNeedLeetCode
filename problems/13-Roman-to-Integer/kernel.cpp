#include "kernel.h"

int romanToInt(char * s)
{
    int ret = 0;
    int t = 0;
    int last = 0;
    int current;
    for (int i = 0; s[i] != '\0'; i++)
    {
        // switch is slow, use a array as the map would be faster (char can be int as the index)
        switch (s[i])
        {
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;
        default:
            continue;
            break;
        }

        if (current < last)
        {
            ret += t;
            t = current;
        }
        else if (current == last)
        {
            t += current;
        }
        else if (current > last)
        {
            t = current - t;
        }

        last = current;
    }

    return ret + t;
}