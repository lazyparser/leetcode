class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> counts(26, 0);
        for (int i = 0; i < magazine.size(); ++i)
            counts[magazine[i]-'a']++;
        for (int i = 0; i < ransomNote.size(); ++i)
            if (--counts[ransomNote[i]-'a'] < 0)
                return false;
        return true;
    }
};

