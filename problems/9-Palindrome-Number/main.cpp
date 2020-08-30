#include "kernel.h"
#include <stdio.h>

int main()
{
    int x;
    while (scanf("%d", &x))
    {
        bool out = isPalindrome(x);
        printf(out ? "True\n" : "False\n");
    }
}