#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a[5000];
    int b[5001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int i = 0; i <= n; i ++) cin >> b[i];
    bool check;
    for (int i = 0; i <= n; i++) {
        check = true;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) check = false;
        }
        if (check) {
            cout << b[i];
            exit(0);
        }
    }
    return 0;
}