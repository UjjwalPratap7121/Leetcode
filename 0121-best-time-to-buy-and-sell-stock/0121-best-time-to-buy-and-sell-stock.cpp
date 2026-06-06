class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minPrice = prices[0]; // Initialize minPrice with the first day's price
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            // Update minPrice if a lower price is found
            minPrice = min(minPrice, prices[i]);
            // Calculate current profit and update maxProfit if it's higher
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};
