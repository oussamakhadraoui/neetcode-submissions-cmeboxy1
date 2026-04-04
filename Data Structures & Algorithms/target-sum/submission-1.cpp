class Solution {
public:
    int rec(int index,vector<int>& nums, int target,vector<unordered_map<int,int>>&dp,int sum){
        if(index==nums.size())return sum==target?1:0;
        if(dp[index].count(sum))return dp[index][sum];
        int odd=rec(index+1,nums,target,dp,sum+nums[index]);
        int even=rec(index+1,nums,target,dp,sum-nums[index]);
        return dp[index][sum]=even+odd;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<unordered_map<int,int>>dp(n);
        return rec(0,nums,target,dp,0);
    }
};
