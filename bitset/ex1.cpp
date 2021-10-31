#include "main.h"

namespace bitset_exercises {

    unsigned long long bitsetFunction(int n);

    void ex1() {
        cout << "Change 5th bit: " << bitsetFunction(5) << endl;
    }

    unsigned long long bitsetFunction(int n) {
        bitset<20> foo;
        foo[n] = true;
        return foo.to_ullong();
    }
}

