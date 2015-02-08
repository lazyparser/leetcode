class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;
        int ret = 1;
        for (int b1 = 1, b2 = 1, i = 2; i <= n; ++i) {
            ret = b2 + b1;
            b2 = b1;
            b1 = ret;
        }
        return ret;
    }
};
