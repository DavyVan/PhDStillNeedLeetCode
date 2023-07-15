#include "kernel.h"
#include "../../utils/input.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    vector<int> nums;
    while(input_vector(nums))
    {
        int result = s.thirdMax(nums);

        cout << "Answer:" << result << endl;
    }
}