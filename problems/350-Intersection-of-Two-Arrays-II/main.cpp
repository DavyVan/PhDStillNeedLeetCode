#include "kernel.h"
#include <cstdlib>
#include <iostream>

int main()
{
    int size1, size2;
    cout << "Input <size1> <size2>: ";
    while (cin >> size1 >> size2)
    {
        vector<int> nums1, nums2;
        cout << "Input <nums1>...: ";
        int t;
        for (int i = 0; i < size1; i++)
        {
            cin >> t;
            nums1.push_back(t);
        }
        cout << "Input <nums2>...: ";
        for (int i = 0; i < size2; i++)
        {
            cin >> t;
            nums2.push_back(t);
        }

        vector<int> ret = Solution::intersect(nums1, nums2);
        for (vector<int>::iterator it = ret.begin(); it < ret.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
}