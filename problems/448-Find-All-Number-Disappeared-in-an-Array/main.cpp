#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution s;
    vector<int> nums;
    while(input_vector(nums))
    {
        vector<int> result = s.findDisappearedNumbers(nums);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}