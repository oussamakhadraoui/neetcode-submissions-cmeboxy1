#include<cstring>;
class Solution {
public:
    int dp [101];
    int rec(int end,vector<int>&nums,int index){
        if(index>end)return 0;
        if(dp[index]!=-1)return dp[index];
        int result= max(rec(end,nums,index+1),nums[index]+rec(end,nums,index+2));
        return dp[index]= result;
    }
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        if(n==0)return nums[0];
        memset(dp,-1,sizeof(dp));
        int r1=rec(n-1,nums,0);
        memset(dp,-1,sizeof(dp));
        return max(r1,rec(n,nums,1));

    }
};
