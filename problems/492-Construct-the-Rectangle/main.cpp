#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    int area;
    while(cin >> area)
    {
        auto result = S.constructRectangle(area);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}