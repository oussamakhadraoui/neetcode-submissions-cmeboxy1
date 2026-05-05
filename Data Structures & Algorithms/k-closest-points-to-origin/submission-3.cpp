class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        int n= points.size();
        for(int i =0;i<n;i++){
            vector<int>p=points[i];
            int x=p[0];
            int y=p[1];
            pq.push({x*x+y*y,i});
            if(pq.size()>k)pq.pop();
        }

        vector<vector<int>>result;
        while(pq.size()){
            pair<int,int>top=pq.top();
            pq.pop();
            result.push_back(points[top.second]);
        }
        return result;
    }
};
