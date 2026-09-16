class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 1;
        int max_profit = 0;
        while (sell < prices.size()) {
            if (prices[sell] < prices[buy]) buy = sell;
            else {
                int profit = prices[sell] - prices[buy];
                max_profit = max(max_profit, profit);
            }
            sell++;
        }
        return max_profit;
    }
};
