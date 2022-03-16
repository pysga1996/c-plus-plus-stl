#include "main.h"

namespace vector_exercises {
    using namespace std;

    vector<int> resizeVector(vector<int> v, int n);

    void ex4() {
        vector<int> a = initializeVector(4);
        cout << "Size of vector a (before): " << a.size() << endl;
        a = resizeVector(a, 10);
        cout << "Size of vector a (after): " << a.size() << endl;
    }

    vector<int> resizeVector(vector<int> v, int n) {
        v.resize(n);
        return v;
    }
}

