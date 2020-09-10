#include "kernel.h"
#include <stdlib.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int carry = 0;
    int *ret;

    // plus 1
    digits[digitsSize-1]++;

    for (int i = digitsSize-1; i >= 0; i--)
    {
        digits[i] += carry;
        carry = digits[i] / 10;
        digits[i] %= 10;
    }

    if (carry > 0)
    {
        // need to add one more digit
        ret = (int*) malloc(sizeof(int) * (digitsSize+1));
        ret[0] = carry;
        *returnSize = digitsSize + 1;
        memcpy(&ret[1], digits, sizeof(int) * digitsSize);
    }
    else
    {
        // just copy
        ret = (int*) malloc(sizeof(int) * digitsSize);
        *returnSize = digitsSize;
        memcpy(ret, digits, sizeof(int) * digitsSize);
    }

    return ret;
}