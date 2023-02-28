//
// Created by wlq on 2023/2/27.
// 例题2.2 棋盘距离 p75
//
#include "bits/stdc++.h"

using namespace std;

int main() {
    int n; // 组数
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char begin[5], end[5];
        cin >> begin >> end;
        int x, y;
        x = abs(begin[0] - end[0]);
        y = abs(begin[1] - end[1]);
        if (x == 0 && y == 0) {
            cout << "0 0 0 0" << endl;
            continue;
        }
        // 王
        cout << min(x, y) + abs(x - y) << " ";
        // 后
        if (x == y) {
            cout << "1 ";
        } else {
            cout << "2 ";
        }
        // 车
        if (x == 0 || y == 0) {
            cout << "1 ";
        } else {
            cout << "2 ";
        }
        // 象
        if (abs(x - y) % 2 != 0) {
            cout << "Inf" << endl;
        } else if (x == y) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }
    return 0;
}
