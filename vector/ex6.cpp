#include "main.h"

namespace vector_exercises {
    using namespace std;

    int maxProductOfAdjacentElements(vector<int> v);

    void ex6() {
        vector<int> v = randomIntVector(10);
        cout << "Vector randomized: ";
        printIntVector(v);
        cout << "Maximum of the product of two consecutive integers in the vector: " << maxProductOfAdjacentElements(v)
             << endl;
    }

    int maxProductOfAdjacentElements(vector<int> v) {
        int max = v[0] * v[1];
        for (int i = 1; i < v.size() - 1; i++) {
            if (v[i] * v[i + 1] > max) {
                max = v[i] * v[i + 1];
            }
        }
        return max;
    }
}
