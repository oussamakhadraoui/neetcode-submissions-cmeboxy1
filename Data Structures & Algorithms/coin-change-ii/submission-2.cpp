class Solution {
public:
    vector<vector<int>>dp;
    int n ;
    int solve(int start,vector<int>coins,int amount){
        if(start>=n||amount<0)return 0;
        if(amount==0)return 1;
        if(dp[start][amount]!=-1)return dp[start][amount];
        int result = solve(start+1,coins,amount)+solve(start,coins,amount-coins[start]);
        return dp[start][amount]=result;
    }
    int change(int amount, vector<int>& coins) {
        this->n=coins.size();
        dp=vector<vector<int>>(n+1,vector<int>(amount+1,-1));
        return solve(0,coins,amount);

    }
};
