#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;

    cout << a.length() << ' ' << b.length() << endl;
    cout << a+b << endl;
    char Swap = a[0];
    a[0] = b[0];
    b[0] = Swap;
    cout << a << ' ' << b; 
    return 0;
}