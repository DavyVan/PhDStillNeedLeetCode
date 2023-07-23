#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<vector<int>> triangle;
    while(input_triangle(triangle))
    {
        auto result = S.minimumTotal(triangle);

        cout << "Answer:" << boolalpha << result << endl;
    }
}