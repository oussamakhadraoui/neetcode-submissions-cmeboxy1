class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>rec;
        for(int i =0;i<nums.size();i++){
            if(rec.count(nums[i]))return true;
            rec.insert(nums[i]);
        }
        return 0;
    }
};