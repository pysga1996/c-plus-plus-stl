#include "main.h"
#include <iostream>
#include <list>
#include <vector>

namespace list_exercises {

    int sumOfFirstAndLastElement(list<int> linkedList);

    void ex2() {
        vector<int> v = initializeVector(5);
        function<int(vector<int>)> verifyFunction = [](vector<int> v) -> int {
            list<int> l(v.begin(), v.end());
            return sumOfFirstAndLastElement(l);
        };
        int sum = verifyFunction(v);
        cout << "Sum of first and last element: " << sum << endl;
    }

    int sumOfFirstAndLastElement(list<int> linkedList) {
        if (linkedList.empty()) return -1;
        if (linkedList.size() == 1) return linkedList.front();
        return linkedList.front() + linkedList.back();
    }
}