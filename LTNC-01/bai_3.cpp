#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int Int;
    long Long;
    char Char;
    float Float;
    double Double;
    cin >> Int >> Long >> Char >> Float >> Double;
    cout << Int << endl << Long << endl << Char << endl;
    cout << fixed << setprecision(3) << Float << endl;
    cout << fixed << setprecision(9) << Double ;
    return 0;
}