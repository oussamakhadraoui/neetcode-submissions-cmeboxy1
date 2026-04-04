class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>rec(nums.begin(),nums.end());
        
        int result=0;
        for(int n :rec){
            if(rec.count(n-1))continue;
            int leng=1;
            while(rec.count(n+leng))leng++;
            result=max(result,leng);
        }
        return result;
    }
};
