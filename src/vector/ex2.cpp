#include "main.h"

namespace vector_exercises {
    using namespace std;

    int sumOfVector(const vector<int>& v);

    void ex2() {
        vector<int> a = initializeVector(4);
        cout << "Sum of vector a: " << sumOfVector(a) << endl;
    }

    int sumOfVector(const vector<int>& v) {
        int res = 0;
        for (int i : v) {
            res += i;
        }
        return res;
    }

}

