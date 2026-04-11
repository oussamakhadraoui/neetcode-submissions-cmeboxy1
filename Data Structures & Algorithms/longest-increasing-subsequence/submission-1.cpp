class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
                vector<int>result;
        for(int &n:nums ){
            if(result.empty()|| n>result.back())result.push_back(n);
            else{
                int index = lower_bound(result.begin(),result.end(),n)-result.begin();
                result[index]=n;
            }
        }
        return result.size();
    }
};
