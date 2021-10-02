#include <iostream>
#include <vector>
#include "main.h"

namespace vector_exercises {
    using namespace std;


    void ex1() {
        vector<int> a = initializeVector(5);
//    cout << "Address of a outside function: " << &a << endl;
        cout << "Size of vector a: " << a.size() << endl;

        // Bạn có thể dụng vòng lặp để duyệt vector giống với duyệt mảng
        for (int i : a) {
            cout << i << " ";
        }
    }

}

