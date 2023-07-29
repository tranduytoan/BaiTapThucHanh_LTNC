// Tự lập trình hàm tìm kiếm nhị phân (binary search) bằng đệ qui. Viết cả phần hàm main() để kiểm tra. 

#include <bits/stdc++.h>
using namespace std;

bool binarySearh(vector<int> a, int left, int right, int x) {
    if (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) return true;
        if (a[mid] > x) return binarySearh(a, left, mid - 1, x);
        return binarySearh(a, mid + 1, right, x);
    }
    return false;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    if (binarySearh(a, 0, n - 1, x)) cout << "YES";
    else cout << "NO";
    return 0;
}