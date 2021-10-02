#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select an exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            vector_exercises::ex1();
            break;
        case 2:
            vector_exercises::ex2();
            break;
        case 3:
            vector_exercises::ex3();
            break;
        case 4:
            vector_exercises::ex4();
            break;
        case 5:
            vector_exercises::ex5();
            break;
        case 6:
            vector_exercises::ex6();
            break;
        case 7:
            vector_exercises::ex7();
            break;
        case 8:
            vector_exercises::ex8();
            break;
        case 9:
            vector_exercises::ex9();
            break;
        case 10:
            vector_exercises::ex10();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}