class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buy = prices[0];
        for(int i = 0; i < prices.size(); i++) {
            if(buy < prices[i]) {
                max += prices[i] - buy;
            }
            buy = prices[i];
        }
        return max;
    }
};
