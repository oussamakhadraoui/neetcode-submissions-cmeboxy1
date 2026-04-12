class Solution {
public:
    vector<int>add;
    vector<vector<int>>result;
    int n;
    void backtrack(vector<int>& nums,int start){
        result.push_back(add);
        for(int i =start;i<n;i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            add.push_back(nums[i]);
            backtrack(nums,i+1);
            add.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        this->n=nums.size();
        sort(nums.begin(),nums.end());
        backtrack(nums,0);
        return result;
    }
};
