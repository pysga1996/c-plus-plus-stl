#include "main.h"

namespace bitset_exercises {

    vector<int> checkActivity(int n);

    void ex3() {
        cout << "Activities to produces 5 virus: " << endl;
        vector<int> v = checkActivity(5);
        printIntVector(v);
    }

    vector<int> checkActivity(int n) {
        vector<int> v;
        int k;
        bitset<32> foo(n);
        for (k = foo.size() - 1; k >= 0; k--) {
            if (foo.test(k)) {
                break;
            }
        }
        for (int i = k; i >= 0; i--) {
            v.push_back(foo.test(i));
        }
        return v;
    }
}

