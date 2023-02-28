//
// Created by wlq on 2023/2/27.
// 例题2.4 装箱问题 p81
// 技巧: x/y 向上取整可以写为 (x+y-1)/y
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int num, x, y, b1, b2, b3, b4, b5, b6;
    int tool[4]={0, 5, 3, 1};
    while (true) {
        cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6;
        if (b1 == 0 && b2 == 0 && b3 == 0 && b4 == 0 && b5 == 0 && b6 == 0) {
            break;
        }
        num = b6 + b5 + b4 + (b3+3) / 4;
        y = 5 * b4 + tool[b3 % 4];
        if (b2 > y) {
            num += (b2 - y + 8) / 9;
        }
        x = 36 * num - 36 * b6 - 25 * b5 - 16 * b4 - 9 * b3 - 4 * b2;
        if (b1 > x) {
            num += (b1 - x + 35) / 36;
        }
        cout << num << endl;
    }
    return 0;
}
