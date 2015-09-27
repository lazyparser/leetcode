class Solution {
public:
    int reverse(int x) {
        long long r = 0;
        while (x) {
            r = r*10 + x%10;
            x /= 10;
        }
        if (r > 2147483648 || r < -2147483649) return 0;
        return (int)r;
    }
};