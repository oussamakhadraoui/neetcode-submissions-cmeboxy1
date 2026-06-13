class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        for(int i =0;i<n;i++){
            if(result.size()==0||result.back()<nums[i])result.push_back(nums[i]);
            else {
                int index= lower_bound(result.begin(),result.end(),nums[i])-result.begin();
                result[index]=nums[i];
            }
        }
        return result.size();
    }
};
