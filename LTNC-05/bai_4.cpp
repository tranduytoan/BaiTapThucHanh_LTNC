#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    cin >> q;
    vector<int> query(q);
    for (auto &i : query) cin >> i;

    for (auto i : query) {
        auto it = lower_bound(a.begin(), a.end(), i);
        int x = *it;
        if (x == i) cout << "Yes " << (it - a.begin() + 1);
        else cout << "No " << (it - a.begin() + 1);
        cout << endl;
    }
    return 0;
}