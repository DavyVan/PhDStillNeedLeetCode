#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> nums1, nums2;
    while(input_vector(nums1))
    {
        input_vector(nums2);

        auto result = S.nextGreaterElement(nums1, nums2);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}