#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> score;
    while(input_vector(score))
    {
        auto result = S.findRelativeRanks(score);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}