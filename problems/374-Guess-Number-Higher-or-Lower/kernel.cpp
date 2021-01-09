#include "kernel.h"

int target_num;

int guess(int _guess)
{
    if (_guess < target_num)
        return 1;
    else if (_guess > target_num)
        return -1;
    else 
        return 0;
}

int guessNumber(int n)
{
    int start = 1;
    int end = n;
    int _guess = start + (end - start) / 2;

    while (true)
    {
        int guess_result = guess(_guess);
        if (guess_result == 0)
            return _guess;
        else if (guess_result == -1)
        {
            end = _guess;
        }
        else if (guess_result == 1)
        {
            start = (start == _guess ? start+1 : _guess);
        }
        _guess = start + (end - start) / 2;
    }
}