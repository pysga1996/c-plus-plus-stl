#include <iostream>
#include <list>
#include <vector>

namespace list_exercises {
    using namespace std;

    list<int> initializeList(int n) {
        list<int> a;
        for (int i = 1; i <= n; i++){
            a.push_back(i);
        }
        return a;
    }

    vector<int> initializeVector(int n) {
        vector<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }
        return a;
    }

    void printIntVector(vector<int> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}
