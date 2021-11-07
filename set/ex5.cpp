#include "main.h"

namespace set_exercises {

    vector<string> mergeStringArr(vector<string> arr1, const vector<string> &arr2);

    void ex5() {
        vector<string> v1 = vector<string>{"codelearn", "learncode", "codelearn", "io","fpt"};
        printVector(v1);
        vector<string> v2 = vector<string>{"learncode", "codelearnio", "fsoft"};
        printVector(v2);
        cout << "After merging two arrays: " << endl;
        vector<string> v = mergeStringArr(v1, v2);
        printVector(v);
    }

    vector<string> mergeStringArr(vector<string> arr1, const vector<string> &arr2) {
        set<string> resSet(arr1.begin(), arr1.end());
        for (const auto &str: arr2) {
            auto search = resSet.find(str);
            if (search != resSet.end()) // found
            {
                resSet.erase(search);
            }
        }
        vector<string> res(resSet.begin(), resSet.end());
        return res;
    }
}