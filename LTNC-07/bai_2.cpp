// Cho tập các chữ cái {‘a', ‘b', ‘c', ‘d'}. Liệt kê tất các các chuỗi có 3 kí tự có thể được tạo thành từ tập 4 chữ cái trên. Chú ý rằng các chữ cái trong chuỗi 3 kí tự có thể giống nhau (như “aaa").

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> a = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; ++k) {
                cout << a[i] << a[j] << a[k] << endl;
            }
        }
    }
    return 0;
}