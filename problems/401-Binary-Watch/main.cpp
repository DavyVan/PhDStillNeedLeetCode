#include "kernel.h"
#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    cout << "Input <n>: ";
    while (cin >> n)
    {
        vector<string> ret = Solution::readBinaryWatch(n);
        for (vector<string>::iterator it = ret.begin(); it < ret.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        cout << "Input <n>: ";
    }
}