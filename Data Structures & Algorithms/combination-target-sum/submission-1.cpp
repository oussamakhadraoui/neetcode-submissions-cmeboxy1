class Solution {
public:
    int n ;
    void backtrack(vector<int>&add,vector<vector<int>>&result,vector<int>& nums, int target,int start){
        if(target<0)return ;
        if(target==0){
            result.push_back(add);
        }
        for(int i =start;i<n;i++){
            add.push_back(nums[i]);
            backtrack(add,result,nums,target-nums[i],i);
            add.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        this->n= nums.size();
        vector<int>add;
        vector<vector<int>>result;
        backtrack(add,result,nums,target,0);
        return result;
    }
};
