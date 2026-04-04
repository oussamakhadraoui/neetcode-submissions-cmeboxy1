#include<cstring>
class Solution {
public:
    int vis[7];
    void backtrack(vector<int>& nums,vector<int>& add,vector<vector<int>>& result){

        if(add.size()==nums.size()){
            result.push_back(add);
            return ;
        }
        
        for(int i=0;i<nums.size();i++){
            if(vis[i])continue ;
            vis[i]=1;
            add.push_back(nums[i]);
            backtrack(nums,add,result);
            add.pop_back();
            vis[i]=0;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        memset(vis,0,sizeof(vis));
        vector<int>add;
        vector<vector<int>>result;
        backtrack(nums,add,result);
        return result;    
    }
};
