#include <bits/stdc++.h>
using namespace std;

int main()
{
    enum queries {
        INSERT = 1,
        ERASE = 2,
        FIND
    };
    
    int q;
    cin >> q;
    set<int> a;
    for (int i = 0; i < q; i++) {
        int y, x;
        cin >> y >> x;
        switch (y)
        {
        case INSERT:
            a.insert(x);
            break;
        
        case ERASE:
            a.erase(x);
            break;

        case FIND:
            if (a.find(x) != a.end()) cout << "Yes";
            else cout << "No";
            cout << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}