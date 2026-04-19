class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = INT_MAX, profit = 0;
        for(int i = 0; i < prices.size(); i++){
            a = min(a, prices[i]);
            profit = max(profit, prices[i] - a);
        }
        return profit;
    }
};