#include "main.h"

namespace set_exercises {

    int differentNumbers(const vector<int>& inputVector);

    void ex1() {
        vector<int> v = randomIntVector(10);
        printIntVector(v);
        cout << "Different elements in vector: " << differentNumbers(v) << endl;
    }

    int differentNumbers(const vector<int>& inputVector) {
        set<int> s;
        for (int i : inputVector) {
            s.insert(i);
        }
        return s.size();
    }
}