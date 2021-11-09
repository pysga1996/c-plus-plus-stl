#include "main.h"

namespace set_exercises {

    string diversity(string str, int k);

    void ex9() {
        string input;
        int k;
        cout << "Enter word and k: " << endl;
        cin >> input >> k;
        cout
                << "Minimum characters need to change to make the given word being combination of different characters is: "
                << diversity(input, k) << endl;
    }

    string diversity(string str, int k) {
        set<char> s;
        int i;
        string ret;
        if (str.size() < k) {
            ret = "impossible";
        } else {
            for (i = 0; i < str.size(); i++) {
                s.insert(str.at(i));
            }
            if (s.size() >= k) {
                i = 0;
            } else {
                i = k - s.size();
            }
            ret = to_string(i);
        }
        return ret;
    }
}