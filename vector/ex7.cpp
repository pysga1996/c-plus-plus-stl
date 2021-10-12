#include <iostream>
#include <vector>
#include "main.h"

namespace vector_exercises {
    using namespace std;

    vector<string> findLongestStrings(const vector<string>& arr);

    void ex7() {
        vector<string> v = randomStringVector(10);
        cout << "Vector randomized: ";
        printStringVector(v);
        vector<string> result = findLongestStrings(v);
        cout << "Longest string (s) in the vector: ";
        for (auto &i: result) {
            cout << i << " ";
        }
        cout << endl;
    }

    vector<string> findLongestStrings(const vector<string>& arr) {
        unsigned long max = 0;
        vector<string> result;
        for (auto & i : arr) {
            if (max < i.size()) {
                max = i.size();
            }
        }
        for (auto & i : arr) {
            if (max == i.size()) {
                result.push_back(i);
            }
        }
        return result;
    }
}
