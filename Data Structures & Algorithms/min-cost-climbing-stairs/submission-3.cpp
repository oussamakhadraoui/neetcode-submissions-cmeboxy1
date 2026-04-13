class Solution {
public:
    vector<int>dp;
    int n;
    int solve(vector<int>& cost,int index){
        if(index>n)return 0;
        if(dp[index]!=-1)return dp[index];
        return dp[index]=cost[index]+min(solve(cost,index+1),solve(cost,index+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        this->n=cost.size()-1;
        dp=vector<int>(n+1,-1);
        return min(solve(cost,0),solve(cost,1));
    }
};
