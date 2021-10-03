#include <list>

namespace list_exercises {
    using namespace std;

    list<int> initializeList(int n) {
        list<int> a;
        for (int i = 1; i <= n; i++){
            a.push_back(i);
        }
        return a;
    }
}
