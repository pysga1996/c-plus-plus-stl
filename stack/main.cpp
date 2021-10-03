#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a stack exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            stack_exercises::ex1();
            break;
        case 2:
            stack_exercises::ex2();
            break;
        case 3:
            stack_exercises::ex3();
            break;
        case 4:
            stack_exercises::ex4();
            break;
        case 5:
            stack_exercises::ex5();
            break;
        case 6:
            stack_exercises::ex6();
            break;
        case 7:
            stack_exercises::ex7();
            break;
        case 8:
            stack_exercises::ex8();
            break;
        case 9:
            stack_exercises::ex9();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}