#include "main.h"

namespace vector_exercises {
    using namespace std;

    int sumOfOddElements(vector<int> v);

    void ex3() {
        vector<int> a = initializeVector(4);
        cout << "Sum of vector a: " << sumOfOddElements(a) << endl;
    }

    int sumOfOddElements(vector<int> v) {
        int result = 0;
        vector<int>::iterator it;
        for (it = v.begin(); it != v.end(); it++) {
            if (*it % 2 != 0) {
                result += *it;
            }
        }
        return result;
    }
}
