class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>rec;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int x= target- nums[i];
            if(rec.count(x))return {rec[x],i};
            rec[nums[i]]=i;
        }
        return {0,0};
    }
};
