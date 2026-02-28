class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy= prices[0];
        int maxProfit =0;
        for(int i=1;i<prices.size();i++){
            maxProfit = max(maxProfit , prices[i] - bestbuy);
            bestbuy = min(bestbuy,prices[i]);
    }
    return maxProfit ;
}
};