#include<cstring>
class Solution {
public:
    int dp[101];
    int dfs(int index,vector<int>&nums){
        if(index>=nums.size())return 0;
        if(dp[index]!=-1)return dp[index];
        int result= max(dfs(index+1,nums),nums[index]+dfs(index+2,nums));
        return dp[index]=result;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return max(dfs(0,nums),dfs(1,nums));
    }
};
