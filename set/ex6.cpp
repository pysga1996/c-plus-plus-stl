#include "main.h"

namespace set_exercises {

    vector<int> setFunction(vector<int> arr, int k);

    void ex6() {
        vector<int> v = randomIntVector(10);
        printVector(v);
        vector<int> bounds = setFunction(v, 3);
        cout << "Upper bound and lower bound of 3 in the given array are: " << bounds[0] << " and " << bounds[1] << endl;
    }

    vector<int> setFunction(vector<int> arr, int k) {
        int m, n;
        set<int> s(arr.begin(), arr.end());
        set<int>::iterator it;

        it = s.upper_bound(k);
        m = (it != s.end()) ? *it : -1;

        it = s.lower_bound(k);
        n = (it != s.end()) ? *it : -1;

        return {m, n};
    }
}