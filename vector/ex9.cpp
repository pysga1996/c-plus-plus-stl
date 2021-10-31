#include "main.h"

namespace vector_exercises {
    using namespace std;

    int sumOfFirstAndLastElement(vector<int> v);

    void ex9() {
        vector<int> v = randomIntVector(10);
        cout << "Vector randomized: ";
        printIntVector(v);
        cout << "Sum of the first and last elements: " << sumOfFirstAndLastElement(v) << endl;
    }

    int sumOfFirstAndLastElement(vector<int> v) {
        return v.front() + v.back();
    }
}
