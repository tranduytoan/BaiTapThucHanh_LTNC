#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = 1;
    for (int number : numbers) {
        result = (result * number) % 1307;
    }
    cout << result;

    return 0;
}
