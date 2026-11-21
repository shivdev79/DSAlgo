class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int diff = prices[0];
        int diff1 = 0;
        for(int i = 0 ; i < n ; i++){
            diff = min(diff , prices[i]);
            diff1 = max(diff1 , prices[i] - diff);
        }
        return diff1;
    }
};
