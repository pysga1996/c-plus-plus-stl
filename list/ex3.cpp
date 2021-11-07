#include "main.h"

namespace list_exercises {

    list<int> deleteFrontBack(list<int> l);

    void ex3() {
        function<vector<int>(vector<int>)> verifyFunction = [](vector<int> v) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = deleteFrontBack(l);
            vector<int> ans(l.begin(), l.end());
            return ans;
        };
        vector<int> v = initializeVector(5);
        printVector(v);
        v = verifyFunction(v);
        printVector(v);
    }

    list<int> deleteFrontBack(list<int> l) {
        l.pop_front();
        l.pop_back();
        return l;
    }

}