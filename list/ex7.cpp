#include "main.h"

namespace list_exercises {


    void ex7() {
        function<list<int>(int)> initList = [](int n) -> list<int> {
            list<int> res;
            for (int i = n; i >= 1; i--) {
                res.push_front(i);
            }
            return res;
        };
        function<vector<int>(int)> verifyFunction = [&initList](int n) -> vector<int> {
            list<int> l = initList(n);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = verifyFunction(10);
    }

}