class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1)return 0;
        int result=0;
        int i =0;int j =1;
        while(j<n){
            if(prices[i]<prices[j])result= max(result,prices[j]-prices[i]);
            else i=j; 
            j++;
        } 
        return result;
    }
};
