#include "kernel.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    int n;
    while(cin >> n)
    {
        string result = s.toHex(n);

        cout << "Answer:" << result << endl;
    }
}