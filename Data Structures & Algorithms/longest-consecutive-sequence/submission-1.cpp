class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>rec(nums.begin(),nums.end());
        int result=0;
        for(int &n:nums){
            if(rec.count(n-1))continue;
            int len=1;
            while(rec.count(n+len))len++;
            result=max(result,len);
        }
        return result;
    }
};
