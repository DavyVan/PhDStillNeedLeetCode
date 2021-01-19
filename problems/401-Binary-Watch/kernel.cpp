#include "kernel.h"
#include <sstream>
#include <iomanip>

void Solution::checkBinaryWatch(int num, vector<int> leds, int start, vector<string> &results)
{
    if (num == 0)   // parse the time and add to the vector
    {
        // hour
        int hour = leds[0]*8 + leds[1]*4 + leds[2]*2 + leds[3];
        if (hour > 11)
            return;

        // minute
        int min = leds[4]*32 + leds[5]*16 + leds[6]*8 + leds[7]*4 + leds[8]*2 + leds[9];
        if (min > 59)
            return;

        stringstream ss;
        ss << hour << ":" << setfill('0') << setw(2) << min;
        results.push_back(ss.str());
        return;
    }

    for (int i = start; i < 10; i++)
    {
        leds[i] = 1;
        checkBinaryWatch(num-1, leds, i+1, results);
        leds[i] = 0;
    }
}

vector<string> Solution::readBinaryWatch(int num)
{
    vector<string> ret;
    vector<int> leds(10, 0);
    checkBinaryWatch(num, leds, 0, ret);
    return ret;
}