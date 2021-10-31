#include "main.h"

namespace bitset_exercises {

    void printIntVector(vector<int> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}