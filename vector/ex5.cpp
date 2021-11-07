#include "main.h"

namespace vector_exercises {
    using namespace std;

    vector<int> sortVector(vector<int> v);

    void ex5() {
        vector<int> v = randomIntVector(10);
        cout << "Vector before sorting: ";
        printVector(v);
        v = sortVector(v);
        cout << "Vector after sorting: ";
        printVector(v);
    }

    vector<int> sortVector(vector<int> v) {
        for (int i = 0; i < v.size(); ++i) {
            for (int j = i + 1; j < v.size(); ++j) {
                if (v[i] > v[j]) swap(v[i], v[j]);
            }
        }
        return v;
    }
}

