class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n,1);
        for(int i =1;i<n;i++){
            result[i]=nums[i-1]*result[i-1];
        }
        int st=1;
        for(int i =n-2;i>=0;i--){
            st*=nums[i+1];
            result[i]*=st;
        }
        return result;
    }
};
