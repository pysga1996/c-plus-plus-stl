#include "main.h"
#include <vector>
#include <list>

namespace list_exercises {

    void ex1() {
        function<list<int>(int)> initList = [](int n) -> list<int> {
            list<int> a;
            for (int i = 1; i <= n; i++) {
                a.push_back(i);
            }
            return a;
        };
        function<vector<int>(int)> verifyFunction = [&initList](int n) -> vector<int> {
            list<int> lst = initList(n);
            vector<int> res(lst.begin(), lst.end());
            return res;
        };
        vector<int> v = verifyFunction(5);
        printIntVector(v);
    }
}