#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a map exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            map_exercises::ex1();
            break;
        case 2:
            map_exercises::ex2();
            break;
        case 3:
            map_exercises::ex3();
            break;
        case 4:
            map_exercises::ex4();
            break;
        case 5:
            map_exercises::ex5();
            break;
        case 6:
            map_exercises::ex6();
            break;
        case 7:
            map_exercises::ex7();
            break;
        case 8:
            map_exercises::ex8();
            break;
        case 9:
            map_exercises::ex9();
            break;
        case 10:
            map_exercises::ex10();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}