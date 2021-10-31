#include "main.h"

int main() {
    using namespace queue_exercises;
    int cmd;
    cout << "Select a queue exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        case 8:
            ex8();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}