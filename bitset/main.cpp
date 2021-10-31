#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a bitset exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            bitset_exercises::ex1();
            break;
        case 2:
            bitset_exercises::ex2();
            break;
        case 3:
            bitset_exercises::ex3();
            break;
        case 4:
            bitset_exercises::ex4();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}