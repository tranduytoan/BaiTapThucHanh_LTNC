// #include <bits/stdc++.h>
// using namespace std;

// bool isWin(string *game, int H, int W, int x, int y) {
//     if (y == H-1) return true;

//     bool thang = false;
//     bool trai = false;
//     bool phai = false;
//     if (game[y+1][x] != 'R') thang = isWin(game, H, W, x, y+1);
//     if (game[y][x+1] != 'R' && game[y+1][x+1] != 'R') phai = isWin(game, H, W, x+1, y+1);
//     if (game[y][x-1] != 'R' && game[y+1][x-1] != 'R') trai = isWin(game, H, W, x-1, y+1);

//     if (thang || trai || phai) return true;
//     return false;
// }

// int main()
// {
//     int W, H; //H line contain W character
//     cin >> W >> H;
//     string game[H];
//     int x, y;
//     for (int i = 0; i < H; i++) {
//         cin >> game[i];
//         if (i == 0) {
//             for(int j = 0; j < W; j++) {
//                 if (game[i][j] == 'Y') {
//                     x = j;
//                     y = i;
//                 }
//             }
//         }
//     }

//     if (isWin(game, H, W, x, y)) cout << "YES";
//     else cout << "NO";
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H;
    cin >> W >> H;
    vector<string> a(H);
    for (auto & i : a) cin >> i;

    for (int i = 1; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (a[i][j] == 'R') continue;
            for (int k = -1; k < 2; ++k) {
                int new_j = j + k;
                if (new_j < 0 || new_j >= W) continue;
                if (a[i-1][new_j]=='Y' && a[i-1][j] != 'R')
                    a[i][j] = 'Y';
            }
        }
    }
    int cnt = 0;
    for (auto i : a[H-1]) cnt += i == 'Y';
    if (cnt) cout << "YES";
    else cout << "NO";
}