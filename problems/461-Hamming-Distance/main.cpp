#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int x, y;
    while(cin >> x >> y)
    {
        auto result = S.hammingDistance(x, y);

        cout << "Answer:" << result << endl;
    }
}