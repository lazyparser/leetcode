class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int j = 0; j < s.size(); ++j) {
            if (g[i] <= s[j] && i < g.size()) ++i;
        }
        return i;
    }
};

