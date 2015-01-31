class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) return "";
        return longestCommonPrefixEx(strs, strs.size());
    }
    string longestCommonPrefixEx(vector<string> &strs, size_t n) {
        // assert n > 0
        if (n < 2) return strs[0];
        string &l = strs[n - 1], r = longestCommonPrefixEx(strs, n - 1);
        size_t len = 0;
        while (len < l.size() && len < r.size() && l[len] == r[len])
            ++len;
        return l.substr(0, len);
    }
};
