class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int n = nums.size();
        vector<int>result;
        for(int i =0;i<n;i++){
            if(dq.size()&&(dq.front()<=i-k))dq.pop_front();
            while(dq.size()&&nums[i]>nums[dq.back()])dq.pop_back();
            dq.push_back(i);

            if(i+1>=k)result.push_back(nums[dq.front()]);

        }
        return result;
    }
};
