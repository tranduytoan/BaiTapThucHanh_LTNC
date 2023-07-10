#include <bits/stdc++.h>
using namespace std;

bool isEqualCaseInsensitive(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    } else {
        for (int i = 0; i < int(s1.length()); i++) {
            if (tolower(s1[i]) != tolower(s2[i])) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    s1 = "ABC";
    s2 = "aBc";

    if (isEqualCaseInsensitive(s1, s2)) cout << "true";
    else cout << "false";
    return 0;
}