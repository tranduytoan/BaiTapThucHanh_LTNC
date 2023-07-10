#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    int MSNV;
    string name;
    int soNgayCong;
    int bac;
    double luong;
};

// "17020968, Đặng Tuấn Hùng, 20, 3"
NhanVien inputNhanVien() {
    string msnv, name, day, bac;
    getline(cin, msnv, ',');
    getline(cin, name, ',');
    name.erase(0, 1);
    getline(cin, day, ',');
    day.erase(0, 1);
    getline(cin, bac);
    bac.erase(0, 1);

    //input
    NhanVien a;
    a.MSNV = stoi(msnv);
    a.name = name;
    a.soNgayCong = stoi(day);
    a.bac = stoi(bac);
    a.luong = a.soNgayCong * a.bac * 1.05;
    return a;

}

int main() {
    int n;
    cin >> n;
    vector<NhanVien> a;
    double luongCaoNhat = 0;
    for (int i = 0; i < n; i++) {
        NhanVien nhan_vien = inputNhanVien();
        a.push_back(nhan_vien);
        if (a[i].luong > luongCaoNhat) luongCaoNhat = a[i].luong;
    }

    for (int i = 0; i < n; i++) {
        if (a[i].luong == luongCaoNhat) cout << a[i].name << endl;
    }
    return 0;
}
