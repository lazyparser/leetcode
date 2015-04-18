class Solution {
public:
    string convertToTitle(int n) {
        vector<int> title;
        while (n) {
            title.push_back((n - 1) % 26);
            n = (n - 1) / 26;
        }
        string s = "";
        for (int i = title.size() - 1; i >= 0; --i) {
            s = s + (char)(title[i] + (int)'A');
        }
		return s;
    }
};
