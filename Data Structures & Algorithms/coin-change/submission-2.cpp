class Solution {
public:
    vector<int>dp;
    int N;
    int solve(vector<int>& coins, int amount){
        if(amount==0)return 0;

        if(dp[amount]!=-1)return dp[amount];
        int result=N;
        for(int &c:coins){
            if(amount-c>=0){
                result=min(result,1+solve(coins,amount-c));
            }
        }
        return dp[amount]=result;
    }
    int coinChange(vector<int>& coins, int amount) {
        this->N=amount+1;
        dp=vector<int>(amount+1,-1);
        int result= solve(coins,amount);
        return result==N?-1:result;
    }
};
