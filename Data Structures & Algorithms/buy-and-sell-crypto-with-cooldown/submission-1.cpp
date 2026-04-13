class Solution {
public:
    vector<vector<int>>dp;
    int n;
    int solve(vector<int>& prices,bool buy,int index){
        if(index>=n)return 0;
        if(dp[index][buy]!=-1)return dp[index][buy];
        int result=solve(prices,buy,index+1);
        if(buy){
            result=max(result,solve(prices,!buy,index+1)-prices[index]);
        }else{
            result=max(result,solve(prices,!buy,index+2)+prices[index]); 
        }
        return dp[index][buy]=result;
    }
    int maxProfit(vector<int>& prices) {
        this->n=prices.size();
        dp=vector<vector<int>>(n,vector<int>(2,-1));
        return solve(prices,1,0);
    }
};
