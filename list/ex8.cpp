#include "main.h"

namespace list_exercises {

    list<int> removeElements(list<int> linkedList, int n);

    void ex8() {
        function<vector<int>(vector<int>, int)> verifyFunction = [](vector<int> v, int n) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = removeElements(l, n);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = initializeVector(10);
        printVector(v);
        v = verifyFunction(v, 7);
        printVector(v);
    }

    list<int> removeElements(list<int> linkedList, int n) {
        linkedList.remove(n);
        return linkedList;
    }
}