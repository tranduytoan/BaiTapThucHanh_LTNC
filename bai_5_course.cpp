#include <bits/stdc++.h>
using namespace std;

// dọc
bool checkVertical(char caro[100][100], int i, int j) {    
    for (int _i = i-2; _i <= i+2; _i++) {
        if (caro[_i][j] != caro[i][j]) return false;
    }
    return true;
}

//ngang
bool checkHorizon(char caro[100][100], int i, int j) {    
    for (int _j = j-2; _j <= j+2; _j++) {
        if (caro[i][_j] != caro[i][j]) return false;
    }
    return true;
}

// 2 đường chéo
bool checkOblique(char caro[100][100], int i, int j) {    
    bool check1 = true, check2 = true;
    for (int a = -2; a <= 2; a++) {
        if (caro[i+a][j+a] != caro[i][j]) check1 = false; //chéo 1
        if (caro[i-a][j+a] != caro[i][j]) check2 = false; //chéo 2
    }
    if (check1 || check2) return true;
    return false;
}

//kiểm tra một ô có là tâm đường chéo 5 (win) không
bool check(char caro[100][100], int i, int j, int m, int n) {
    //điều kiện dọc
    if ( 1 < i && i < m-2 )
        if (checkVertical(caro, i, j)) return true;
    
    //điều kiện ngang
    if ( 1 < j && j < n-2 )
        if (checkHorizon(caro, i, j)) return true;

    //đk chéo ( = ngang + dọc)
    
    if ( (1 < i && i < m-2) && (1 < j && j < n-2) )
        if (checkOblique(caro, i, j)) return true;
    
    return false;
}

int main() {
    char caro[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> caro[i][j];
    }
    
    bool xWin = false;
    bool oWin = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (check(caro, i, j, m, n)) {
                if (caro[i][j] == 'O') {
                    oWin = true;
                }
                else if (caro[i][j] == 'X') {
                    xWin = true;
                }
                else continue;
            }
        }
    }
    if ((xWin && oWin) || (!xWin && !oWin)) cout << 0;
    else if (xWin) cout << -1;
    else if (oWin) cout << 1;
    return 0;
}