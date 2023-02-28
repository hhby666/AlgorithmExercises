//
// Created by wlq on 2023/2/27.
// http://noi.openjudge.cn/ch0201/1809/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int a[16];
    int i = 0;
    int count = 0;
    for (; i < 16; ++i) {
        int temp;
        cin >> temp;
        if(temp == 0)break;
        a[i] = temp;
    }
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            if (a[j] * 2 == a[k]) {
                count++;
                cout << a[j]<< " " << a[k] << endl;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
