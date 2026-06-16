class Solution {
public:
    int jump(vector<int>& nums) {
        int l =0,r=0;
        int n = nums.size();
        int result =0;
        while(r<n-1){
            int furthest = 0;
            for(int i =l;i<=r;i++){
                furthest= max(furthest,i+nums[i]);
            }
            l=r+1;
            r=furthest;
            result ++;
        }
        return result;
    }
};
