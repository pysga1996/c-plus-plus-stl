#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a set exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            set_exercises::ex1();
            break;
        case 2:
            set_exercises::ex2();
            break;
        case 3:
            set_exercises::ex3();
            break;
        case 4:
            set_exercises::ex4();
            break;
        case 5:
            set_exercises::ex5();
            break;
        case 6:
            set_exercises::ex6();
            break;
        case 7:
            set_exercises::ex7();
            break;
        case 8:
            set_exercises::ex8();
            break;
        case 9:
            set_exercises::ex9();
            break;
        case 10:
            set_exercises::ex10();
            break;
        case 11:
            set_exercises::ex11();
            break;
        case 12:
            set_exercises::ex12();
            break;
        case 13:
            set_exercises::ex13();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}