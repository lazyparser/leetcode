class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size()<2) return true;
        bool otherUpper = false, hasLower = islower(word[0]);
        for (int i = 1; i < word.size(); ++i) {
            if (isupper(word[i]))
                otherUpper = true;
            else
                hasLower = true;
        }
        return (!(hasLower && otherUpper));
    }

};
