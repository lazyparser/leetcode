class Solution {
public:
    string reverseString(string s) {
        string rs(s);
        reverse(rs.begin(), rs.end());
        return rs;
    }
};
