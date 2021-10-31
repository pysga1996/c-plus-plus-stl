#include "main.h"

namespace list_exercises {

    list<int> sortLinkedList(list<int> l);

    void ex10() {
        function<vector<int>(vector<int>)> verifyFunction = [](vector<int> v) -> vector<int> {
            list<int> l(v.begin(), v.end());
            l = sortLinkedList(l);
            vector<int> vec(l.begin(), l.end());
            return vec;
        };
        vector<int> v = randomIntVector(10);
        printIntVector(v);
        v = verifyFunction(v);
        printIntVector(v);
    }

    list<int> sortLinkedList(list<int> l) {
        for (auto it1 = l.begin(); it1 != l.end(); it1++) {
            auto it2 = it1;
            for(;it1 != l.end() && ++it2!=l.end();){
                if(*it1 > * it2){
                    int tmp = *it1;
                    *it1 = *it2;
                    *it2 = tmp;
                }
            }
        }
        return l;
    }
}