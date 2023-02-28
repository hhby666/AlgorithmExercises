//
// Created by wlq on 2023/2/28.
// http://noi.openjudge.cn/ch0108/19/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int ct[105][105];
    int n;
    cin >> n;
    int c = 0, a = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> ct[i][j];
            if (ct[i][j] <= 50) {
                a++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            if (ct[i][j] <= 50) {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                    c++;
                } else if (ct[i - 1][j] > 50 || ct[i + 1][j] > 50 || ct[i][j + 1] > 50 || ct[i][j - 1] > 50) {
                    c++;
                }
            }
        }
    }
    cout << a << " " << c;
    return 0;
}
