#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector <string> Anagram;
    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp);
        // chuyen viet thuong
        for( auto &i : temp) {
            i = tolower(i);
        }
        // loai bo dau cach va dau cau
        int leng = temp.length();
        for (int i = 0; i < leng; i++) {
            if (temp[i] < 'a' || temp[i] > 'z') {
                temp.erase(temp.begin() + i);
                i--;
                leng--;
            }
        }
        // sap xep
        sort(temp.begin(), temp.end());
        Anagram.push_back(temp);
    }


    bool isAnagram = true;
    for (int i = 1; i < n; i++) {
        if (Anagram[0] != Anagram[i]) isAnagram = false;
    }

    if (isAnagram) cout << "true";
    else cout << "false";
    return 0;
}