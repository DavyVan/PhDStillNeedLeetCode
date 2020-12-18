#include <string>
using namespace std;

class Solution {
private:
    // normalized should be empty
    static void getPatternFromPattern(string pattern, string &normalized);
    static void getPatternFromString(string s, string &normalized);
public:
    static bool wordPattern(string pattern, string s);
};
