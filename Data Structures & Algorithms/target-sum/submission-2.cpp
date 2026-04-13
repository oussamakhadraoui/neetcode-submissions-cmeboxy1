class Solution {
public:
    int n ;
    
    int solve(vector<int>& nums, int target,int index,vector<unordered_map<int, int>>& dp){
        if(index==n)return target==0?1:0;
        if(dp[index].count(target))return dp[index][target];
        int result = solve(nums,target+nums[index],index+1,dp)+solve(nums,target-nums[index],index+1,dp);
        return  dp[index][target]=result;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        this->n=nums.size();
        vector<unordered_map<int, int>> dp(n);
        return solve(nums,target,0,dp);
    }
};
