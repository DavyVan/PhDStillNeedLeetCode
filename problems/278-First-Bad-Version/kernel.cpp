#include "kernel.h"

int bad;

bool isBadVersion(int version)
{
    if (version >= bad)
        return true;
    else
        return false;
}

int firstBadVersion(int n)
{
    // binary search
    int start = 1;
    int end = n;
    int mid = n/2;
    while (end - start > 1)
    {
        if (isBadVersion(mid))  // bad
        {
            end = mid;
        }
        else 
        {
            start = mid;
        }
        // mid = (start+end) / 2;   // this can overflow
        mid = (end-start) / 2 + start;
    }
    if (start == end)
        return start;   // or end;
    else
    {
        if (isBadVersion(start))
            return start;
        else 
            return end;
    }
}