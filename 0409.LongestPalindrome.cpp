class Solution {
public:
    int longestPalindrome(string s) {
        int pairs = 0, odd = 0;
        vector<int> charmap(26+26, 0);
        for (auto i = s.begin(); i != s.end(); ++i)
            charmap[m(*i)]++;
        for (int i = 0; i < 26+26; ++i) {
            pairs += 2 * (charmap[i] / 2);
            if (charmap[i]%2) odd = 1;
        }
        return pairs + odd;
    }
    int m(int ch) {
        return ch >= 'a' ? ch - 'a' + 26 : ch - 'A';
    }
};

