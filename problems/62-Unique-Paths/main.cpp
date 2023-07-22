#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int m, n;
    while(cin >> m >> n)
    {
        auto result = S.uniquePaths(m, n);

        cout << "Answer:" << boolalpha << result << endl;
    }
}