class Solution {
public:
    vector<int>vis;
    int n ;
    vector<vector<int>>result;
    vector<int>add;
    void backtrack(vector<int>& nums){
        if(add.size()==n)result.push_back(add);
        for(int i =0;i<n;i++){
            if(vis[i])continue;
            vis[i]=true;
            add.push_back(nums[i]);
            backtrack(nums);
            add.pop_back();
            vis[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        this->n=nums.size();
        vis=vector<int>(n,0);
        backtrack(nums);
        return result;

    }
};
