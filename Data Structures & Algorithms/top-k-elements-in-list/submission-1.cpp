class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>rec;
        for(int &n:nums)rec[n]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto[key,val]:rec){
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
