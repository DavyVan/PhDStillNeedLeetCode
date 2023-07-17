#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<int> times;
    int duration;
    while(input_vector(times))
    {
        cin >> duration;

        auto result = S.findPoisonedDuration(times, duration);

        cout << "Answer:" << result << endl;
    }
}