class Solution {
public:
    int titleToNumber(string s) {
        int val = 0;
        for (int i = 0; i < s.length(); i++)
            val = (val * 26) + (int)s[i] - 'A' + 1;
        return val;
    }
};
