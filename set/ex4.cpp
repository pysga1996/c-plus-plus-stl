#include "main.h"

namespace set_exercises {

    bool setFind(vector<int> arr, int k);

    void ex4() {
        vector<int> v = randomIntVector(10);
        printVector(v);
        cout << boolalpha << "Is 7 in the vector: " << setFind(v, 7) << endl;
        cout << "Is 3 in the vector: " << setFind(v, 3) << endl;
    }

    bool setFind(vector<int> arr, int k) {
        set<int> s(arr.begin(), arr.end());
        auto it = s.find(k);
        return it != s.end();
    }
}