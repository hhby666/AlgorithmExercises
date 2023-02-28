#include "bits/stdc++.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int preNum = getNum(s[0]);
        for (int i = 1; i < s.size(); i++) {
            int num = getNum(s[i]);
            if (preNum < num) {
                result -= preNum;
            } else {
                result += preNum;
            }
            preNum = num;
        }
        result += preNum;
        return result;
    }

    int getNum(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
