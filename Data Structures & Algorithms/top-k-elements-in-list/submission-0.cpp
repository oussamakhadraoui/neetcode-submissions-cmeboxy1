class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>rec;
        for(int &n :nums)rec[n]++;
        priority_queue<pair<int,int>>pq;
        vector<int>result;
        for(auto &[key,val]:rec)pq.push({val,key});

        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;

    }
};