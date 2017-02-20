class Solution {
public:
    char findTheDifference(string s, string t) {
        int maps[26];
        for (int i = 0; i < 26; i++) maps[i] = 0;
        for (int i = 0; i < s.size(); ++i) maps[s[i]-'a']++;
        for (int i = 0; i < t.size(); ++i)
            if (0 > --maps[t[i]-'a'])
                return t[i];
    }
};

