#ifndef STL_MAIN_H
#define STL_MAIN_H
#include <vector>
#include <set>
#include <iostream>
#include <random>

namespace set_exercises {

    using namespace std;

    set<int> initializeSet(int in);

    vector<int> randomIntVector(int n);

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

    void ex5();

    void ex6();

    void ex7();

    void ex8();

    void ex9();

    void ex10();

    void ex11();

    void ex12();

    void ex13();
}

#endif //STL_MAIN_H
