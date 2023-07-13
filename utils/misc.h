#pragma once

#include <string>
using namespace std;

/**
 * Convert number literal to string.
 */
string operator "" _s(unsigned long long x)
{
    return to_string(x);
}

