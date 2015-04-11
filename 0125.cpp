class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() <= 1) return true;
        for (int l = 0, r = s.length() - 1; l < r;) {
            if (!isalnum(s[l])) ++l;
            else if (!isalnum(s[r])) --r;
            else if (toupper(s[l]) != toupper(s[r])) return false;
            else { ++l; --r; }
        }
        return true;
    }
};

