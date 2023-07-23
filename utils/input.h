#ifndef __UTILS_INPUT_H__
#define __UTILS_INPUT_H__

#include <vector>
#include <iostream>
using namespace std;

template<typename T>
bool input_vector(vector<T>& container) {
    // clean the container anyway
    container.clear();
    
    int size;

    try {
        cout << "Input vector size:" << endl;
        cin >> size;
        container.resize(size);
        
        cout << "Input vector elements, separate by space:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> container[i];
        }
    } catch (...) {
        return false;
    }
    return true;
}

template<typename T>
bool input_matrix(vector<vector<T>>& container) {
    // clean first
    container.clear();

    int row, col;
    
    try {
        cout << "Input matrix row and col: " << endl;
        cin >> row >> col;
        container.resize(row);

        cout << "Input matrix elements, separate by space, row first order: " << endl;
        for (int r = 0; r < row; r++) {
            container[r].resize(col);
            for (int c = 0; c < col; c++) {
                cin >> container[r][c];
            }
        }
    } catch (...) {
        return false;
    }
    return true;
}

template<typename T>
bool input_triangle(vector<vector<T>>& container) {
    // clear
    container.clear();

    int n;

    try {
        cout << "Input triangle height: " << endl;
        cin >> n;
        container.resize(n);

        cout << "Input triangle elements..." << endl;
        for (int i = 1; i <= n; i++) {
            cout << "The " << i << "-th row (" << i << " elements): " << endl;
            container[i-1].resize(i);
            for (int j = 0; j < i; j++) {
                cin >> container[i-1][j];
            }
        }
    } catch (...) {
        return false;
    }
    return true;
}


#endif //__UTILS_INPUT_H__