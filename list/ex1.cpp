#include "main.h"
#include <vector>
#include <list>

namespace list_exercises {

    list<int> initList(int n);

    void ex1() {
        function<vector<int>(int)> verifyFunction = [](int n) -> vector<int> {
            list<int> lst = initList(n);
            vector<int> res(lst.begin(), lst.end());
            return res;
        };
        vector<int> v = verifyFunction(5);
        printIntVector(v);
    }

    list<int> initList(int n) {
        list<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }
        return a;
    }
}