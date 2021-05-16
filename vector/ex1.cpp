#include <iostream>
#include <vector>

using namespace std;

vector<int> initializeVector(int n);

void ex1() {
    vector<int> a = initializeVector(5);
//    cout << "Address of a outside function: " << &a << endl;
    cout << "Size of vector a: " << a.size() << endl;

    // Bạn có thể dụng vòng lặp để duyệt vector giống với duyệt mảng
    for (int i : a) {
        cout << i << " ";
    }
}

vector<int> initializeVector(int n) {
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }
//    cout << "Address of a inside function: " << &a << endl;
    return a;
}
