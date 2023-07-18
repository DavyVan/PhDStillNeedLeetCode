#include "kernel.h"
#include "../../utils/input.h"
#include "../../utils/output.h"
#include <iostream>

using namespace std;

int main()
{
    Solution S;
    vector<string> words;
    while(input_vector(words))
    {
        auto result = S.findWords(words);

        cout << "Answer:" << endl;
        output_vector(result);
    }
}