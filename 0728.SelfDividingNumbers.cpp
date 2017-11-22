class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i))
                v.push_back(i);
        }
        return v;
    }
    bool isSelfDividing(const int num) {
        // 1 <= n <= 10000
        int n = num, k = 0;
        if (n<10) return true;
        while (n) {
            k = n % 10;
            if ((k == 0) || (num % k != 0)) return false;
            n /= 10;
        }
        return true;
    }
};
