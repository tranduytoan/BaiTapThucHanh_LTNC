#include <bits/stdc++.h>
using namespace std;

int main()
{
    enum queries {
        ADD = 1,
        ERASE = 2,
        FIND
    };
    
    int q;
    cin >> q;
    map<string, int> a;
    for (int i = 0; i < q; i++) {
        int Q, y;
        string x;
        cin >> Q;
        switch (Q)
        {
        case ADD:
            cin >> x >> y;
            a[x] += y;
            break;
        
        case ERASE:
            cin >> x;
            a.erase(x);
            break;

        case FIND:
            cin >> x;
            if (a.find(x) != a.end()) {
                cout << a.find(x)->second;
            } else cout << 0;
            cout << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}