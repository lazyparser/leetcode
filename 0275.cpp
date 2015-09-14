// 275 h-index-ii
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h = 0, n = citations.size();
        if (n == 0) return 0;
        for (;h < n; ++h) {
            if (h + 1 > citations[n - h - 1])
                return h;
        }
        return h;
    }
};
