#include "main.h"

namespace set_exercises {

    int vectorBeautiful(vector<int> v);

    void ex7() {
        vector<int> v = randomIntVector(5);
        printVector(v);
        bool isBeautiful = vectorBeautiful(v) == 0;
        cout << boolalpha << "The given vector is a beautiful vector? " << isBeautiful << endl;
    }

    int vectorBeautiful(vector<int> v) {
        set<int> s(v.begin(), v.end());
        return v.size() - s.size();
    }
}