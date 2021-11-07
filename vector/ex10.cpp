#include "main.h"

namespace vector_exercises {
    using namespace std;

    vector<int> removeElements(vector<int> v, int l, int r);

    void ex10() {
        vector<int> v = randomIntVector(10);
        cout << "Vector randomized: ";
        printVector(v);
        v = removeElements(v, 3, 7);
        cout << "Vector after remove from element #3 to element #7: ";
        printVector(v);
    }

    std::vector<int> removeElements(vector<int> v, int l, int r) {
        v.erase(v.begin() + l, v.begin() + r + 1);
        return v;
    }
}