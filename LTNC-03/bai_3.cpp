#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string militaryTime;
    string hour, min_sec;
    int Hour;

    hour = s.substr(0, 2);
    min_sec = s.substr(2, 6);
    Hour = stoi(hour);

    if (s[8] == 'A') {
        if (Hour == 12) hour = "00";
    } else {
        if (Hour < 12) Hour += 12;
        hour = to_string(Hour);
    }
    return hour + min_sec;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
