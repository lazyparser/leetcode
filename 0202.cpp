class Solution {
public:
    bool isHappy(int n) {
        // force iteration. very force :-)
        // assert n > 0
        if (n==1) return true;
        for (int i = 0; i < 1000; ++i) {
            int d = 0, nn = 0;
            while (n) {
                d = n % 10;
                nn += d*d;
                n /= 10;
            }
            if (nn == 1)
                return true;
            n = nn;
        }
        return false;
    }
};
