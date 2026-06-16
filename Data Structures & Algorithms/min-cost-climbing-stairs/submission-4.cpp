class Solution {
public:
    int n ;
    vector<int>dp;
    int solve(vector<int>&cost,int start){
        if(start>n)return 0;
        if(dp[start]!=-1)return dp[start];
        return dp[start]=cost[start]+min(solve(cost,start+1),solve(cost,start+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        this->n=cost.size()-1;
        dp=vector<int>(n+1,-1);
        return min(solve(cost,1),solve(cost,0));
    }
};
