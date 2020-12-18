#include "kernel.h"
#include <cstdlib>
#include <map>
#include <sstream>

void Solution::getPatternFromPattern(string pattern, string &normalized)
{
    map<char, int> _map;
    int count = 0;
    for (int i = 0; i < pattern.length(); i++)
    {
        char current = pattern[i];
        if (current >= 'a' && current <= 'z')
        {
            if (_map.find(current) != _map.end())
            {
                normalized += (char) (_map[current]+'a');
            }
            else
            {
                _map[current] = count;
                normalized += (char) (count + 'a');
                count++;
            }
        }
    }
}

void Solution::getPatternFromString(string s, string &normalized)
{
    map<string, int> _map;
    int count = 0;
    stringstream ss(s);
    string t;
    while (ss >> t)
    {
        if (_map.find(t) != _map.end())
        {
            normalized += (char) (_map[t] + 'a');
        }
        else
        {
            _map[t] = count;
            normalized += (char) (count + 'a');
            count++;
        }
    }
}

bool Solution::wordPattern(string pattern, string s)
{
    string pattern_norm, s_norm;
    getPatternFromPattern(pattern, pattern_norm);
    getPatternFromString(s, s_norm);
    return pattern_norm == s_norm;
}