#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> candytype;
    while(input_vector(candytype))
    {
        auto result = S.distributeCandies(candytype);

        cout << "Answer:" << result << endl;
    }
}