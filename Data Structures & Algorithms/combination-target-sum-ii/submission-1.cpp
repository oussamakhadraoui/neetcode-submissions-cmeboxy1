
class Solution {
public:
    int n ;
    void backtrack(vector<int>&add,vector<vector<int>>&result,vector<int>& nums, int target,int start){
        if(target<0)return ;
        if(target==0){
            result.push_back(add);
        }
        for(int i =start;i<n;i++){
            if(i>start&&nums[i]==nums[i-1])continue;
            add.push_back(nums[i]);
            backtrack(add,result,nums,target-nums[i],i+1);
            add.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        this->n= nums.size();
        sort(nums.begin(),nums.end());
        vector<int>add;
        vector<vector<int>>result;
        backtrack(add,result,nums,target,0);
        return result;
    }
};
