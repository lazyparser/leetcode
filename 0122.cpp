class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int profit = 0;
        int prev = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            int delta = prices[i] - prev;
            if (delta > 0) profit += delta;
            prev = prices[i];
        }
        return profit;
    }
    /*
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        bool is_holding = false;
        int price_in = 0;
        int profit = 0;
        int price_prev = prices[0];
        for (int i = 1; i < prices.size(); ++i) {
            if (price_prev < prices[i]) {
                if (is_holding) continue;
                is_holding = true;
                price_in = price_prev;
            } else if (price_prev > prices[i]) {
                if (!is_holding) continue;
                is_holding = false;
                profit += price_prev - price_in;
            }
            price_prev = prices[i];
        }
        if (is_holding)
            profit += price_prev - price_in;
        return profit;
    }*/
};
