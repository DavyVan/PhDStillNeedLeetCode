#include "kernel.h"
#include "../../utils/input.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    string ss;
    while(getline(cin, ss))
    {
        int result = s.countSegments(ss);

        cout << "Answer:" << result << endl;
    }
}