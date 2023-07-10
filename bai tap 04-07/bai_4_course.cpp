#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void outputPrime(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) cout << a[i] << " ";
    }
}

int main()
{
    int a[5] = {2, 3, 5, 7, 11};
    outputPrime(a, 5);
    return 0;
}