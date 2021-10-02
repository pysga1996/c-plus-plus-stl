#include <vector>

namespace vector_exercises {
    using namespace std;

    vector<int> initializeVector(int n);

    vector<int> initializeVector(int n) {
        vector<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }
//    cout << "Address of a inside function: " << &a << endl;
        return a;
    }
}
