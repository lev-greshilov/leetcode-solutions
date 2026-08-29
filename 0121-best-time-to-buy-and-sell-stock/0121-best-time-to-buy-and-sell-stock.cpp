class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy_price = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int sell_price = prices[i];
            if (sell_price > min_buy_price) {
                max_profit = max(max_profit, sell_price - min_buy_price);
            } else {
                min_buy_price = prices[i];
            }
        }
        return max_profit;
    }
};