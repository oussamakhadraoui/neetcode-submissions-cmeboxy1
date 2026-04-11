class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>rec;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(rec.count(target-nums[i]))return {rec[target-nums[i]],i};
            rec[nums[i]]=i;
        }
        return {};
    }
};
