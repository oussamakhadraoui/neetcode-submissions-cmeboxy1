#include<cstring>
class Solution {
public:

    void backtrack(vector<int>& nums,vector<int>& add,vector<vector<int>>& result,int start){

        result.push_back(add);
        
        for(int i=start;i<nums.size();i++){
            add.push_back(nums[i]);
            backtrack(nums,add,result,i+1);
            add.pop_back();

        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>add;
        vector<vector<int>>result;
        backtrack(nums,add,result,0);
        return result;    
        
    }
};
