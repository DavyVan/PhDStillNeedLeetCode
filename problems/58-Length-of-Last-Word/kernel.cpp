#include "kernel.h"
#include <stdlib.h>

int lengthOfLastWord(char * s)
{
    int len = 0;
    bool ready_for_next_word = true;

    if (s == NULL)
        return 0;
    if (s[0] == '\0')
        return 0;
    
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (s[i] == ' ')
        {
            ready_for_next_word = true;
            continue;
        }
        else
        {
            if (ready_for_next_word)
            {
                // start to count new word
                len = 1;
                ready_for_next_word = false;
            }
            else
            {
                // continue with current word
                len++;
            }
            
        }
        
    }
    return len;
}