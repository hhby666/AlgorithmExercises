//
// Created by wlq on 2023/2/28.
// http://bailian.openjudge.cn/practice/2973/
//
#include "bits/stdc++.h"

#define LOCAL

using namespace std;
void answer(){
    int i, k, base[31], sum;
    char skew[32];
    base[0]=1;
    for (i = 1; i < 31; i++) {
        base[i] = 2 * base[i - 1] + 1;
    }
    while (true) {
        cin >> skew;
        if (strcmp(skew, "0") == 0) {
            break;
        }
        sum = 0;
        k = strlen(skew);
        for (i = 0; i < strlen(skew); i++) {
            k--;
            sum += (skew[i] - '0') * base[k];
        }
        cout << sum << endl;
    }
}

int getNum(char *s) {
    int num = 0;
    int len = 0;
    for (; len < 32; len++) {
        if (s[len] == '\0') {
            break;
        }
    }
    for (int i = 0; i < len; ++i) {
        if (s[i] == '\0') {
            break;
        }
        num += (s[i] - '0') * (pow(2, len - i) - 1);
    }
    return num;
}

int main() {
#ifdef LOCAL
    freopen(R"(C:\Project\CProject\AlgorithmExercises\study\file\in.txt)", "r", stdin);
    freopen(R"(study\file\out.txt)", "w", stdout);
#endif
//    while (true) {
//        char s[32];
//        cin >> s;
//        if (getNum(s) == 0)break;
//        cout << getNum(s) << endl;
//    }
    answer();
    return 0;
}

