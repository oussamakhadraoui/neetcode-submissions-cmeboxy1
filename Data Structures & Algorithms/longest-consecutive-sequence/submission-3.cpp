class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n==0||n==1)return n;
        unordered_set<int>rec(nums.begin(),nums.end());
        int result =0;
        for(int i =0;i<n;i++){
            if(rec.count(nums[i]-1))continue;
            int count=1;
            int x=1;
            while(rec.count(nums[i]+x)){
                count++;
                x++;
            }
            result = max(result,count);
        }
        return result;
    }
};
