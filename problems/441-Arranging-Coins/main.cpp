#include "kernel.h"
#include "../../utils/input.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    int n;
    while(cin >> n)
    {
        int result = s.arrangeCoins(n);

        cout << "Answer:" << result << endl;
    }
}