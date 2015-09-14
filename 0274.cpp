#274 H-Index
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h = 0;
        if (citations.size() == 0) return 0;
        std::sort(citations.begin(), citations.end());
        std::reverse(citations.begin(), citations.end());
        while (h < citations.size() && citations[h] >= h+1)
            h++;
        return h;
    }
};