class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        int n = points.size();
        for(int i =0;i<n;i++){
            auto p = points[i];
            int x = p[0]*p[0]+p[1]*p[1];
            pq.push({x,i});
            while(pq.size()>k)pq.pop();
        }
        vector<vector<int>>result;
        while(pq.size()){
            result.push_back(points[pq.top().second]);
            pq.pop();
        }
        return result;
        
    }
};
