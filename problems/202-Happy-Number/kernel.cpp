#include "kernel.h"

bool isHappy(int n)
{
    if (n <= 0)
        return false;
    
    int sum = n;
    while (true)
    {
        if (sum < 10)
        {
            if (sum == 7 || sum == 1)
                return true;
            else 
                return false;
        }

        n = sum;
        sum = 0;
        while (n != 0)
        {
            int last_digit = n % 10;
            sum += last_digit * last_digit;
            n /= 10;
        }
    }
}