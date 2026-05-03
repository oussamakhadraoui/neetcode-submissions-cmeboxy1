class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>rec(nums.begin(),nums.end());
        int n = nums.size();
        int result=0;
        for(int i =0;i<n;i++){
            if(rec.count(nums[i]-1))continue;
            int count=1;
            while(rec.count(nums[i]+count)){
                count++;
            }
            result=max(result,count);
        }
        return result;
    }
};
