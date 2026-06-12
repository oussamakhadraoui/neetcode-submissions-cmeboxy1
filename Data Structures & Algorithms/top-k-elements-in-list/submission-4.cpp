class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int>rec;
        int n = nums.size();
        for(int i =0;i<n;i++){
            rec[nums[i]]++;
        }
        for(auto&[key,val]:rec){
            pq.push({val,key});
            if(pq.size()>k)pq.pop();
        }
        vector<int>result;
        while(pq.size()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
