//
// Created by wlq on 2023/2/28.
// http://noi.openjudge.cn/ch0108/18/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int n;
    cin >> n;
    int x=0, y=0;
    int tempI=-1, tempJ=-1;
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            if (temp == 0) {
                if (i>tempI) {
                    x++;
                    tempI=i;
                }
                if(j>tempJ){
                    y++;
                    tempJ = j;
                }
            }
        }
    }
    cout << (x - 2) * (y - 2);
    return 0;
}
