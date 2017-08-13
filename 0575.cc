class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        const int n = candies.size()/2;
        map<int, int> kinds;
        for (auto it = candies.begin(); it != candies.end(); it++)
            kinds[*it] = 1;
        return kinds.size() >= n ? n : kinds.size();
    }
};
