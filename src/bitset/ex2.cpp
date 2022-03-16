#include "main.h"

namespace bitset_exercises {

    int countOperations(int n);

    void ex2() {
        cout << "Number of bit 1 of 59: " << countOperations(59) << endl;
    }

    int countOperations(int n) {
        bitset<32> foo(n);
        return foo.count();
    }
}

