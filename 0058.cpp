class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int n, k;
        for (n = 0; *(s + n); ++n)
            ;
        --n;
        while (n >= 0 && *(s + n) == ' ')
            --n;
        if (n < 0) return 0;
        for (k = n - 1; k >= 0; --k)
            if (*(s + k) == ' ')
                return n - k;
        return n + 1;
    }
};
