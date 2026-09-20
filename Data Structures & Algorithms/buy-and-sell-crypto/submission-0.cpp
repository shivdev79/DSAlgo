class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int minprice = prices[0];
        int diff = 0;
        for(int i = 0 ; i < n ; i++){
            minprice = min(minprice , prices[i]);
            diff = max(diff , prices[i] - minprice);
        }
        return diff;
    }
};
