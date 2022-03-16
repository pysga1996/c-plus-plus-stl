#ifndef STL_MAIN_H
#define STL_MAIN_H
#include <bitset>
#include <vector>
#include <iostream>

namespace bitset_exercises {

    using namespace std;

    template <typename T>
    void printVector(vector<T> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    void ex1();

    void ex2();

    void ex3();

    void ex4();

}

#endif //STL_MAIN_H
