#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select a queue exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            queue_exercises::ex1();
            break;
        case 2:
            queue_exercises::ex2();
            break;
        case 3:
            queue_exercises::ex3();
            break;
        case 4:
            queue_exercises::ex4();
            break;
        case 5:
            queue_exercises::ex5();
            break;
        case 6:
            queue_exercises::ex6();
            break;
        case 7:
            queue_exercises::ex7();
            break;
        case 8:
            queue_exercises::ex8();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}