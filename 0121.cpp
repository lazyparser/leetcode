// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
        int low = prices[0], profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            int delta = prices[i] - low;
            if (delta > profit) profit = delta;
            if (prices[i] < low) low = prices[i];
        }
        return profit;
    }
};
