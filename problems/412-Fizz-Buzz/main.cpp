#include "kernel.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    int n;
    while(cin >> n)
    {
        vector<string> result = s.fizzBuzz(n);

        cout << "Answer:" << endl;
        for (auto it = result.begin(); it < result.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
}