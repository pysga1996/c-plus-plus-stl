#include "main.h"

namespace bitset_exercises {

    char convertChar(char ch);

    void ex4() {
        cout << "Flip bit of char A: " << convertChar('A') << endl;
    }

    char convertChar(char ch) {
        bitset<7> foo(ch);
        foo.flip();
        return char(foo.to_ulong());
    }
}

