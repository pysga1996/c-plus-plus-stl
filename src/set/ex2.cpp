#include "main.h"

namespace set_exercises {

    vector<vector<int>> uniqueRows(const vector<vector<int>>& matrix);

    void ex2() {
        vector<int> v1 = randomIntVector(10);
        vector<int> v2 = randomIntVector(10);
        vector<int> v3 = randomIntVector(10);
        vector<vector<int>> m{v1, v2, v3, v1, v3, v1, v2};
        cout << "Duplicated vector: " << endl;
        for (auto & i : m) {
            printVector(i);
        }
        m = uniqueRows(m);
        cout << "After removing duplicated elements: " << endl;
        for (auto & i : m) {
            printVector(i);
        }
    }

    vector<vector<int>> uniqueRows(const vector<vector<int>>& matrix) {
        set<vector<int>> s;
        vector<vector<int>> result;
        for (auto & it : matrix) {
            if (!s.count(it)) {
                s.insert(it);
                result.push_back(it);
            }
        }
        return result;
    }
}