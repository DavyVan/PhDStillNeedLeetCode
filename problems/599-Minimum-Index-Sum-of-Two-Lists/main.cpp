#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<string> list1, list2;
    while(input_vector(list1))
    {
        input_vector(list2);

        auto result = S.findRestaurant(list1, list2);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}