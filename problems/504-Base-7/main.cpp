#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int num;
    while(cin >> num)
    {
        auto result = S.convertToBase7(num);

        cout << "Answer:" << result << endl;
    }
}