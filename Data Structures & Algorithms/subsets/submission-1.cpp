class Solution {
public:
    int n;
    void backtrack(vector<int>&add,vector<vector<int>>&result,int start,vector<int>& nums){
        result.push_back(add);
        for(int i =start;i<n;i++){
            add.push_back(nums[i]);
            backtrack(add,result,i+1,nums);
            add.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        this->n=nums.size();
        vector<int>add;
        vector<vector<int>>result;
        backtrack(add,result,0,nums);
        return result;
    }
};
