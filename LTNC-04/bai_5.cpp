#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 1; i <= 2*n+1; i++) {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    for (auto i : a) {
        if (i.second%2 == 1) cout << i.first;        
    }
    return 0;
}

