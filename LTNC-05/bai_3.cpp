#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    cin >> x >> a >> b;
    arr.erase(arr.begin()+x-1);
    arr.erase(arr.begin()+a-1, arr.begin()+b-1);
    cout << arr.size() << endl;
    for (auto i : arr) cout << i << ' ';
    return 0;
}