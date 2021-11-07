#include "main.h"

namespace set_exercises {

    string secondOrder(vector<int> arr);

    void ex3() {
        vector<int> v = randomIntVector(10);
        printIntVector(v);
        cout << "Second order of vector: " << secondOrder(v) << endl;
    }

    string secondOrder(vector<int> arr) {
        set<int> s(arr.begin(), arr.end());
        auto it = s.begin();
        advance(it, 1);
        if (s.size() > 1)
            return to_string(*it);
        else
            return "NO";
    }
}