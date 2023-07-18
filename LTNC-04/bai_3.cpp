#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

bool isPalindrome(string s) {
    bool check = true;
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()-i-1]) check = false;
    }
    return check;
}

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s) {
    if (isPalindrome(s)) return -1;

    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()-i-1]) {
            string copy1 = s;
            string copy2 = s;
            copy1.erase(i, 1);
            copy2.erase(s.size()-i-1, 1);
            if (isPalindrome(copy1)) return i;
            if (isPalindrome(copy2)) return s.size()-i-1;
            return -1;
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
