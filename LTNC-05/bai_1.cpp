#include <bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function
    int c, d;
    c = *a + *b;
    d = abs(*a - *b);
    *a = c;
    *b = d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}