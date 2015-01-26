class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int, int> counts;
        for (int i = 0; i < num.size(); i++) {
            auto k = counts.find(num[i]);
            if (k == counts.end())
                counts.insert(pair<int, int>(num[i], 1));
            else
                k->second = k->second + 1;
        }
        for (auto p : counts)
            if (p.second > num.size() / 2)
                return p.first;
    }
};
