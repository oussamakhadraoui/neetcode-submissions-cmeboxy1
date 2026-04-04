#include<cstring>
const int N= 1e5+1;
class Solution {
public:
    int dp[N];
    int rec(vector<int>& coins, int amount){
        if(amount==0)return 0;
        if(dp[amount]!=-1)return dp[amount];
        int result=N;
        for(int i =0;i<coins.size();i++){
            if(amount-coins[i]>=0){
                result=min(result,1+rec(coins,amount-coins[i]));
            }
        }
        return dp[amount]=result;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int result=rec(coins,amount);
        return result==N?-1:result;

    }
};
