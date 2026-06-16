class Solution {
public:
    int n ;
    vector<int>dp;
    int solve(int start,vector<int>&nums){
        if(start>n)return 0;
        if(dp[start]!=-1)return dp[start];
        int result =max(solve(start+1,nums),nums[start]+solve(start+2,nums));
        return dp[start]=result;
    }
    int rob(vector<int>& nums) {
        this->n=nums.size()-1;
        dp= vector<int>(n+1,-1);
        return max(solve(0,nums),solve(1,nums));
    }
};
