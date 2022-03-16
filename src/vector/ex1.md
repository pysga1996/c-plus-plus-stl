#### Giới thiệu về kiểu bài viết hàm trên Codelearn.

Nếu trong các khóa học trước trên Codelearn bạn là đã quen với việc viết code trong hàm `main()` và sử dụng `cin`, `cout` để nhập xuất dữ liệu  thì hôm nay bạn sẽ được biết thêm về loại bài khác là loại bài chỉ cần viết hàm, dữ liệu đầu vào sẽ chính là các tham số và đầu ra chính là kết quả trả về của hàm.

Ví dụ nếu đề bài yêu cầu viết hàm trả tính tổng hai số nguyên `a` và `b` thì bạn sẽ thấy code có sẵn sẽ giống như sau:

```
int sum (int a, int b){

}
```

Việc cần làm của bạn là hoàn thiện hàm sao cho nó trả về đúng kết quả theo yêu cầu của đề bài giống như sau:

```
int sum (int a, int b){
	return a + b;
}
```

Lưu ý: hầu hết các thư viện mà bạn cần đều đã được hệ thống `#include` sẵn. Do đó, bạn không cần phải `#include` thêm.

#### Bài Tập

Viết hàm khai báo và trả về `vector` gồm `n` phần tử với các phần tử có giá trị từ `1` tới `n`.

#### Giới thiệu vector.

Nếu bạn đã hoàn thành khóa học [C++ For Beginners](https://codelearn.io/learning/detail/c-cho-nguoi-moi-bat-dau "https://codelearn.io/learning/detail/c-cho-nguoi-moi-bat-dau") thì chắc chắn đã biết tới khái niệm về mảng, việc sử dụng mảng có rất nhiều hạn chế.  vector có thể được dùng thay thế cho mảng và khắc phục được các nhược điểm của mảng. Cụ thể hơn bạn sẽ được học trong các bài tiếp theo.

Ví dụ về khai báo và sử dụng kiểu dữ liệu vector `vector`:

```
#include <iostream>
// Kiểu dữ liệu vector nằm trong thư viện vector nên bạn cần include thư viện này
#include <vector>

using namespace std;

int main() {
    // Khởi tạo vector các số nguyên a
    vector<int> a;

    // Thêm phần tử vào vector sử dụng hàm push_back
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    // Sử dụng hàm size() để lấy ra số phần tử trong vector
    cout << "Size of vector a: " << a.size() << endl;

    // Bạn có thể dụng vòng lặp để duyệt vector giống với duyệt mảng
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}
```

Kết quả khi chạy chương trình:

```
Size of vector a: 3
1 2 3
```

Có thể thấy cách sử dụng `vector` rất đơn giản, bạn có thể khai báo `vector` mà không cần phải biết trước số phần tử giống với mảng.

Lưu ý: cũng giống với mảng, bạn có thể sử dụng `vector` cho các kiểu dữ liệu khác nhau như `string, double, float, bool, ...`:

```
#include <iostream>
// Kiểu dữ liệu vector nằm trong thư viện vector nên bạn cần include thư viện này
#include <vector>

using namespace std;

int main() {
    // Khai báo vector v dùng để lưu trữ các xâu ký tự
    vector<string> v;

    // Thêm phần tử vào vector v
    v.push_back("Welcome");
    v.push_back("to");
    v.push_back("Codelearn.io!");

    // Hiển thị vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}

```

Kết quả khi chạy chương trình:

```
Welcome to Codelearn.io!
```

#### Hướng dẫn

Code mẫu:

```
vector<int> initializeVector(int n)
{
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }
    return a;
}
```