#include<cstring>
class Solution {
public:
    int dp[5001][2];
    int n;
    int solve(vector<int>& prices,bool buy,int index){
        if(index>=n)return 0;
        if(dp[index][buy]!=-1)return dp[index][buy];
        int coolDown= solve(prices,buy,index+1);

        
        if(buy){
            dp[index][buy]= max(coolDown,solve(prices,!buy,index+1)-prices[index]);
        }else{
            dp[index][buy]= max(coolDown,solve(prices,!buy,index+2)+prices[index]);
        }

        return dp[index][buy];
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        this->n=prices.size();
        return solve(prices,1,0);
    }
};