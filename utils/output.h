#ifndef __UTILS_OUTPUT_H__
#define __UTILS_OUTPUT_H__

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void output_vector(vector<T> v) {
    cout << "Vector size: " << v.size() << endl;
    for (T x : v) {
        cout << x << " ";
    }
    cout << endl;
}

#endif // __UTILS_OUTPUT_H__