class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>rec;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(rec.count(nums[i]))return true;
            rec.insert(nums[i]);

        };
        return false;
    }
};