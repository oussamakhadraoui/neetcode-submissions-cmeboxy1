class Solution {
public:
    int n; 
    void backtrack(int start,vector<int>& nums, int target,vector<int>&add,vector<vector<int>>&result){
        if(target<0)return;
        if(target==0)result.push_back(add);
        else{
            for(int i=start;i<n;i++){
                add.push_back(nums[i]);
                backtrack(i,nums,target-nums[i],add,result);
                add.pop_back();
            }
        }


    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        this->n= nums.size();
        vector<vector<int>>result;
        vector<int>add;
        backtrack(0,nums,target,add,result);
        return result;
    }
};
