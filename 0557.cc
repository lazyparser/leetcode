class Solution {
public:
    string reverseWords(string s) {
        int l = 0, r = 0;
        string rs;
        while (l < s.size()) {
            while (r < s.size() && s[r] != ' ')
                ++r;
            for (int i = r-1; i >= l; --i)
                rs += s[i];
            if (r < s.size()) rs += ' ';
            l = ++r;
        }
        return rs;
    }
};
