class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>rec;
        for(int &n:nums){
            if(rec.count(n))return true;
            rec.insert(n);
        }
        return false;
    }
};