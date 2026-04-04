#include <cstring>
class Solution {
public:
    int dp [100];
    int n ;
    int dfs(vector<int>& cost,int index){
        if(index>n)return 0;
        if(dp[index]!=-1)return dp[index];
        return dp[index]=min(dfs(cost,index+1),dfs(cost,index+2))+cost[index];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        this ->n=cost.size()-1;
        return min(dfs(cost,0),dfs(cost,1));
    }
};
