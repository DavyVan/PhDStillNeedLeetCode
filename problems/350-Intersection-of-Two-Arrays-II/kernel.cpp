#include "kernel.h"
#include <map>

vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2)
{
    map<int, int> n1, n2;
    
    // count nums1
    for (vector<int>::iterator it = nums1.begin(); it < nums1.end(); it++)
    {
        if (n1.find(*it) != n1.end())
        {
            // found
            n1[*it]++;
        }
        else
        {
            // not found
            n1[*it] = 1;
        }
    }
    for (vector<int>::iterator it = nums2.begin(); it < nums2.end(); it++)
    {
        if (n2.find(*it) != n2.end())
        {
            // found
            n2[*it]++;
        }
        else
        {
            // not found
            n2[*it] = 1;
        }
    }

    // intersect
    vector<int> ret;
    for (map<int, int>::iterator it = n1.begin(); it != n1.end(); it++)
    {
        int key = it->first;
        int value1 = it->second;
        if (n2.find(key) != n2.end())
        {
            int count = value1 > n2[key] ? n2[key] : value1;
            while (count--)
            {
                ret.push_back(key);
            }
        }
    }

    return ret;
}