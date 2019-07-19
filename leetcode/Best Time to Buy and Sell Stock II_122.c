class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int result = 0, len = prices.size();
    for (int i = 1; i < len; i++) 
        result += max(prices[i] - prices[i - 1], 0);    
    return result; 
    }
};