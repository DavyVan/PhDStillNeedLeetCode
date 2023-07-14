#include "kernel.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    string n;
    while(cin >> n)
    {
        int result = s.longestPalindrome(n);

        cout << "Answer:" << result << endl;
    }
}