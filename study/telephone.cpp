//
// Created by wlq on 2023/2/28.
// http://bailian.openjudge.cn/practice/2974/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;

char tels[100000][9];
char tools[] = "22233344455566677778889999";
char str[100];

int compare(const void *s1, const void *s2) {
    return (strcmp((char *) s1, (char *) s2));
}

void standardizeTel(int n) {
    int j, k;
    j = k = -1;
    while (k < 8) {
        j++;
        if (str[j] == '-') {
            continue;
        }
        k++;
        if (k == 3) {
            tels[n][k] = '-';
            k++;
        }
        if (str[j] >= 'A' && str[j] <= 'Z') {
            str[j] = tools[str[j] - 'A'];
        }
        tels[n][k] = str[j];
    }
}

int main() {
#ifdef LOCAL
    freopen(R"(study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> str;
        standardizeTel(i);
    }
    qsort(tels, n, 9, compare);
    bool noDuplicate = true;
    i = 0;
    while (i < n) {
        j = i;
        i++;
        while(i<n&&strcmp(tels[i],tels[j])==0) {
            i++;
        }
        if (i - j > 1) {
            cout << tels[j] <<" "<< i - j << endl;
            noDuplicate = false;
        }
    }
    if (noDuplicate) {
        cout << "No duplicates." << endl;
    }
    return 0;
}
