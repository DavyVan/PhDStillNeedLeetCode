# include "kernel.h"

bool isPalindrome(int x){
    // Special cases
    if (x < 0)
        return false;
    
    // Convert x to digits array
    int digits[20];
    int t = x;
    int n_digits = 0;
    while (t != 0)
    {
        digits[n_digits++] = t % 10;
        t /= 10;
    }

    for (int i = 0, j = n_digits-1; i < n_digits && j >= 0; i++, j--)
    {
        if (digits[i] != digits[j])
            return false;
    }
    return true;
}