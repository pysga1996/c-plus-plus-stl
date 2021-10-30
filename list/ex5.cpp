#include "main.h"
#include <list>
#include <vector>

namespace list_exercises {

    void ex5() {
        function<list<int>(list<int>, int, int)> changeValue = [](list<int> l, int first, int last) -> list<int> {
            auto it = l.begin();
            advance(it, first - 1);
            auto it2 = l.begin();
            advance(it2, last);
            l.erase(it, it2);
            return l;
        };
        function<vector<int>(vector<int>, int, int)> verifyFunction = [&](vector<int> v, int first,
                                                                         int last) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = changeValue(l, first, last);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = initializeVector(8);
        printIntVector(v);
        v = verifyFunction(v, 2, 5);
        printIntVector(v);
    }

}