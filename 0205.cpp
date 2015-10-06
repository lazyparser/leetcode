class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map[256];
        for (int i = 0; i < 256; ++i)
            map[i] = -1;
        for (int i = 0; i < s.length(); i++) {
            if (map[s[i]] == -1) {
                for (int j = 0; j < 256; ++j) {
                    if (map[j] == t[i])
                        return false;
                }
                map[s[i]] = t[i];
            } else if (map[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};