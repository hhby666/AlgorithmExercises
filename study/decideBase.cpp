//
// Created by wlq on 2023/2/28.
// http://noi.openjudge.cn/ch0201/1973/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int getNum(int x, int base) {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        if (x == 0) {
            break;
        }
        int temp = x % 10;
        if (temp >= base) {
            return -1;
        }
        sum += temp * pow(base, i);
        x /= 10;
    }
    return sum;
}

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, q, r, b = 2;
        cin >> p >> q >> r;
        for (; b <= 16; b++) {
            if (getNum(p, b) * getNum(q, b) == getNum(r, b)) {
                cout << b << endl;
                break;
            }
        }
        if (b > 16) {
            cout << 0 << endl;
        }
    }
    return 0;
}
