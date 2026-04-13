class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        vector<pair<int,int>>graph[n];
        for(auto &f:flights){
            graph[f[0]].push_back({f[2],f[1]});
        }
        dist[src]=0;
        queue<pair<int,int>>pq;
        pq.push({0,src});
        int stops=0;
        while(stops<=k&&pq.size()){
            int size= pq.size();
            while(size--){
                auto [cost ,node]=pq.front();
                pq.pop();
                for(auto [c,n]:graph[node]){
                    int tot= c+cost;
                    if(tot<dist[n]){
                        dist[n]=tot;
                        pq.push({tot,n});
                    }
                }
            }
            stops++;
        }
        return dist[dst]==INT_MAX?-1:dist[dst];
    }
};
