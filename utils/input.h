#ifndef __UTILS_INPUT_H__
#define __UTILS_INPUT_H__

#include <vector>
#include <iostream>
using namespace std;

template<typename T>
bool input_vector(vector<T>& container) {
    // clean the container anyway
    container.clear();
    
    try {
        int size;

        cout << "Input vector size:" << endl;
        cin >> size;
        container.resize(size);
        
        cout << "Input vector elements, separate by space:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> container[i];
        }
    } catch(...) {
        return false;
    }
    return true;
}


#endif //__UTILS_INPUT_H__