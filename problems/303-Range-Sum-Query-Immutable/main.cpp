#include "kernel.h"
#include <cstdlib>
#include <iostream>

int main()
{
    int size;
    cout << "Input <size>: ";
    while (cin >> size)
    {
        vector<int> nums(size);
        cout << "Input <nums>...: ";
        for (int i = 0; i < size; i++)
            cin >> nums[i];

        NumArray na(nums);

        int start, end;
        cout << "Input <start> <end> (two -1s to start over): ";
        while (cin >> start >> end)
        {
            if (start == -1 || end == -1)
                break;
            cout << na.sumRange(start, end) << endl;
            cout << "Input <start> <end> (two -1s to start over): ";
        }
        cout << "Input <size>: ";
    }
}