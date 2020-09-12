#include "kernel.h"
#include <stdlib.h>
#include <string.h>

char * addBinary(char * a, char * b)
{
    // find the size of each string
    int size_a, size_b;
    for (size_a = 0; a[size_a] != '\0' && a[size_a] != '\n'; size_a++)
        ;
    for (size_b = 0; b[size_b] != '\0' && b[size_b] != '\n'; size_b++)
        ;

    char *longer, *shorter;
    int longer_size, shorter_size;
    if (size_a > size_b)
    {
        longer_size = size_a;
        shorter_size = size_b;
        longer = a;
        shorter = b;
    }
    else
    {
        longer_size = size_b;
        shorter_size = size_a;
        longer = b;
        shorter = a;
    }

    int carry = 0;
    for (int i = longer_size-1; i >= 0; i--)
    {
        if (longer_size - i > shorter_size) // the shorter string has been exhausted.
        {
            if (carry == 0)
                break;  // could finish
            else
            {
                // carry == 1
                carry += longer[i] - '0';
                longer[i] = carry % 2 + '0';
                carry /= 2;
            }
            
        }
        else
        {
            carry += longer[i] + shorter[i+shorter_size-longer_size] - '0' * 2;
            longer[i] = carry % 2 + '0';
            carry /= 2;
        }
        
    }

    char *ret;
    if (carry == 0)
    {
        // no extra digit
        ret = (char*) malloc(longer_size+1);    // include '\0'
        memcpy(ret, longer, longer_size+1);     // include '\0'
    }
    else
    {
        ret = (char*) malloc(longer_size+2);
        ret[0] = carry + '0';
        memcpy(&ret[1], longer, longer_size+1);
    }

    return ret;    
}