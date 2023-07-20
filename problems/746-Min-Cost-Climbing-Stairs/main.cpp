#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> cost;
    while(input_vector(cost))
    {
        auto result = S.minCostClimbingStairs(cost);

        cout << "Answer:" << result << endl;
    }
}