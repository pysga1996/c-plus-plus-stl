#include "main.h"

namespace list_exercises {

    void ex4() {
        function<list<int>(list<int>, int, int)> changeValue = [] (list<int> l, int k, int x) -> list<int> {
            auto it = l.begin(); // it trỏ vào phần tử đầu tiên
            advance(it, k - 1);
            *it = x;
            return l;
        };
        function<vector<int>(vector<int>, int, int)> verifyFunction = [&](vector<int> v, int k, int x) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = changeValue(l, k, x);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = initializeVector(10);
        printIntVector(v);
        v = verifyFunction(v, 7, 12);
        printIntVector(v);
    }

}