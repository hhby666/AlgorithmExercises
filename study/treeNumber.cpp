//
// Created by wlq on 2023/2/27.
// 例题2.3 校门口的树 p77
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int L, M;
    bool trees[10005];
    for (bool & tree : trees) {
        tree = true;
    }
    cin >> L >> M;
    for (int i = 0; i < M; ++i) {
        int begin, end;
        cin >> begin >> end;
        for (int j = begin; j <= end; j++) {
            trees[j] = false;
        }
    }
    int count = 0;
    for (int i = 0; i < L + 1; ++i) {
        if (trees[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
