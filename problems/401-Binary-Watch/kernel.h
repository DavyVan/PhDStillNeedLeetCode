#include <vector>
#include <string>
using namespace std;

class Solution {
private:
    static void checkBinaryWatch(int num, vector<int> leds, int start, vector<string> &results);
public:
    static vector<string> readBinaryWatch(int num);
};