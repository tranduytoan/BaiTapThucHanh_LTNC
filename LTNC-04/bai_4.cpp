#include <bits/stdc++.h>
using namespace std;

class Vector {
public:    
    int size;
    vector<int> a;

    void inputVector() {
        cin >> size;
        for (int i = 0; i < size; i++) {
           int temp;
            cin >> temp;
            a.push_back(temp);
        }
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    Vector arr[n];
    for (auto &i : arr) {
        i.inputVector();
    }
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x].a[y] << endl;
    }
    return 0;
}