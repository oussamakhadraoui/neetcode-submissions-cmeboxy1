class Solution {
public:
    int findMin(vector<int> &nums) {
        int i =0;
        int n = nums.size()-1;
        int j = n;

        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid]>nums[n]){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return nums[i] ;
    }
};
