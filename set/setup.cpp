#include <set>

namespace set_exercises {
    using namespace std;

    set<int> initializeSet(int n) {
        set<int> s;
        for (int i = 1; i <= n; i++) {
            s.insert(i);
        }
        return s;
    }
}

