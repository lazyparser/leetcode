class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> bt(256, -1);
        int max_length = 0;
        for (int i = 0; i < s.length(); i++) {
            if (bt[s[i]] != -1) {
                for (int j = 0; j < 256; j++)
                    if (bt[j] < bt[s[i]])
                        bt[j] = bt[s[i]];
            }
            // trick: '>' is '>=' when bt[s[i]] == -1.
            if (i - bt[s[i]] > max_length)
                max_length = i - bt[s[i]];
            bt[s[i]] = i;
        }
        return max_length;
    }
};

