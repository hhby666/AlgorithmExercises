#include "bits/stdc++.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long temp = x;
        long y = 0;
        while (temp > 0) {
            int last = temp%10;
            temp /= 10;
            y = y * 10 + last;
        }
        return y == x;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
