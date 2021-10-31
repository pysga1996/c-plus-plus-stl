#include "main.h"

namespace vector_exercises {
    using namespace std;

    vector<int> removeLastElement(vector<int> v);

    void ex8() {
        vector<int> v = randomIntVector(10);
        cout << "Vector before remove last element: ";
        printIntVector(v);
        v = removeLastElement(v);
        cout << "Vector after remove last element: ";
        printIntVector(v);
    }

    vector<int> removeLastElement(vector<int> v) {
        v.pop_back();
        return v;
    }
}
