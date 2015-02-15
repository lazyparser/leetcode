class Solution {
public:
    int trailingZeroes(int n) {
        if (n < 1) return 0;
        int zeros = 0;
        for (long long factor = 5; n >= factor; factor *= 5)
            zeros += n / factor;
        return zeros;
    }
};
