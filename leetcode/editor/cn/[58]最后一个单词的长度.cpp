#include "bits/stdc++.h"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int result = 0;
        bool flag = true;
        for (int i = len-1; i >= 0; i--) {
            if(s[i]==' '){
                if (flag) {
                    continue;
                } else {
                    break;
                }
            }else{
                result++;
                flag = false;
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
