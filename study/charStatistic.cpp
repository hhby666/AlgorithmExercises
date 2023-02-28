//
// Created by wlq on 2023/2/28.
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int c[26];
    int n;
    cin >> n;
    for (int j,i = 0; i < n; ++i) {
        memset(c, 0, 26*sizeof(int));
        char s[1005];
        cin>>s;
        for (j = 0; j < strlen(s); ++j) {
            c[s[j] - 'a']++;
        }
        int maxIdx =0 ;
        for (j = 1; j < 26; j++) {
            if (c[maxIdx] < c[j]) {
                maxIdx = j;
            }
        }
        cout << (char)('a'+maxIdx) << " " << c[maxIdx] << endl;
    }
    return 0;
}
