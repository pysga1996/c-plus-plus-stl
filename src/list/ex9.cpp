#include "main.h"

namespace list_exercises {

    void ex9() {
        function<list<int>(list<int>, int)> removeElements = [](list<int> linkedList, int n) -> list<int> {
            for (auto it = linkedList.begin(); it != linkedList.end(); it++) {
                if (*it >= n) {
                    it = linkedList.erase(it);
                    it--;
                }
            }
            return linkedList;
        };
        function<vector<int>(vector<int>, int)> verifyFunction = [&removeElements](vector<int> v,
                                                                                   int n) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = removeElements(l, n);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = initializeVector(10);
        printVector(v);
        verifyFunction(v, 3);
        printVector(v);
    }


}