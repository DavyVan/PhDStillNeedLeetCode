#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> nums;
    while(input_vector(nums))
    {
        auto result = S.deleteAndEarn(nums);

        cout << "Answer:" << boolalpha << result << endl;
    }
}