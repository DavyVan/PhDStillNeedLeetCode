#include "kernel.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    int n;
    while(cin >> n)
    {
        vector<int> ret = s.countBits(n);

        cout << "Answer:" << endl;
        cout << "Vector size: " << ret.size() << endl;
        for (auto it = ret.begin(); it < ret.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
}