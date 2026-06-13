class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result =0;
        int n = prices.size();
        int current =prices[0];
        for(int i =0;i<n;i++){
            current=min(current,prices[i]);
            result =max(result,prices[i]-current );
        }
        return result;
    }
};
