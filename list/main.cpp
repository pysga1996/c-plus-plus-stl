#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a list exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            list_exercises::ex1();
            break;
        case 2:
            list_exercises::ex2();
            break;
        case 3:
            list_exercises::ex3();
            break;
        case 4:
            list_exercises::ex4();
            break;
        case 5:
            list_exercises::ex5();
            break;
        case 6:
            list_exercises::ex6();
            break;
        case 7:
            list_exercises::ex7();
            break;
        case 8:
            list_exercises::ex8();
            break;
        case 9:
            list_exercises::ex9();
            break;
        case 10:
            list_exercises::ex10();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}