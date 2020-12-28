#include "kernel.h"
#include <iostream>
#include <cstdlib>

int main()
{
    int size1, size2;
    cout << "Input <size1> <size2>: ";
    while (cin >> size1 >> size2)
    {
        vector<int> nums1(size1);
        vector<int> nums2(size2);
        cout << "Input <nums1>...: ";
        for (int i = 0; i < size1; i++)
            cin >> nums1[i];
        cout << "Input <nums2>...: ";
        for (int i = 0; i < size2; i++)
            cin >> nums2[i];

        vector<int> ret = Solution::intersection(nums1, nums2);
        for (vector<int>::iterator it = ret.begin(); it < ret.end(); it++)
            cout << *it << " ";
        cout << endl;
        cout << "Input <size1> <size2>: ";
    }
}