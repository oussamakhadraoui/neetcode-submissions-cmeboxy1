#include<cstring>
class Solution {
public:
    int dp[101][5001];
    int rec(int amount, vector<int>& coins,int index) {
        
        if(amount<0||index>=coins.size())return 0;
        if(amount==0)return 1;
        if(dp[index][amount]!=-1)return dp[index][amount];
        int result=rec(amount-coins[index],coins,index)+rec(amount,coins,index+1);
        return dp[index][amount]=result;

    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return rec(amount,coins,0);
    }
};
