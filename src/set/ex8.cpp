#include "main.h"

namespace set_exercises {

    int cyclicShift(string word);

    void ex8() {
        string input;
        cout << "Enter a word: " << endl;
        cin >> input;
        cout << "Cyclic shifts count of the given word is: " << cyclicShift(input) << endl;
    }

    int cyclicShift(string word) {
        set<string> s;
        for (int i = 0; i <= word.size(); i++) {
            char x = word.back();
            word.pop_back();
            word.insert(word.begin() + 0, x);
            s.insert(word);
        }
        return s.size();
    }
}