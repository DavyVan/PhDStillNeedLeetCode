#include "kernel.h"
#include <math.h>

bool isSame(char a, char b)
{
    if (a == b || (abs(a-b) == 32 && (a >= 97 || b >= 97)))
        return true;
    else 
        return false;
}

bool isAlphanumeric(char c)
{
    if ((c >= 48 && c <=57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;
    return false;
}

bool isPalindrome(char * s)
{
    if (s == NULL)
        return false;
    
    int front = 0;
    int end;

    for (end = 0; s[end] != '\0'; end++);
    int len = end;

    for (; front <= end; front++, end--)
    {
        while (front < len && !isAlphanumeric(s[front]))
            front++;
        while (end >= 0 && !isAlphanumeric(s[end]))
            end--;
        
        if (front == len && end == -1)
            break;
        else if (front == len || end == -1)
            return false;

        if (!isSame(s[front], s[end]))
            return false;
    }
    return true;
}