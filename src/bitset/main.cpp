#include "main.h"
#include <common-vector.h>

int main() {
    using namespace bitset_exercises;
    int cmd = -1;
    namespace vt = cpp_commons::common_collection::common_vector;
    vector<int> v = vt::importFromFile<int>("test.txt");
    vt::print(v);
    while (cmd != 0) {
        cout << "Select a bitset exercise:" << endl;
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
            default:
                cout << "Exit" << endl;
        }
    }
    return 0;
}