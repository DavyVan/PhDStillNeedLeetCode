#include "kernel.h"

bool canConstruct(char * ransomNote, char * magazine)
{
    int ransomNote_stat[26] = {0};
    int magazine_stat[26] = {0};

    for (int i = 0; ransomNote[i] != '\0' && ransomNote[i] != '\n'; i++)
    {
        ransomNote_stat[ransomNote[i] - 'a']++;
    }
    for (int i = 0; magazine[i] != '\0' && magazine[i] != '\n'; i++)
    {
        magazine_stat[magazine[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ransomNote_stat[i] > magazine_stat[i])
            return false;
    }
    return true;
}