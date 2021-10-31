#include "main.h"

namespace vector_exercises {
    using namespace std;

    string genRandomString(int length);

    vector<int> initializeVector(int n) {
        vector<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }
        return a;
    }

    vector<string> randomStringVector(int n) {
        vector<string> a;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(1, 10);
        for (int i = 1; i <= n; i++) {
            a.push_back(genRandomString(dis(gen)));
        }
        return a;
    }

    vector<int> randomIntVector(int n) {
        vector<int> a;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 10);
        for (int i = 1; i <= n; i++) {
            a.push_back(dis(gen));
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

    void printStringVector(vector<string> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    string genRandomString(int length) {
        string randomstring;
        string characters = "1234567890abcdefghijklmnoprstuvyzxwq";

        for (int i = 0; i < length; ++i) {
            randomstring += characters[rand() % (characters.size())];
        }
        return randomstring;
    }
}
