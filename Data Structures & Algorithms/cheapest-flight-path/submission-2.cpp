class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n+1,INT_MAX);
        dist[src]=0;
        k++;
        while(k--){
            vector<int>temp=dist;
            for(auto f:flights){
                int begin=f[0];
                int end=f[1];
                int cost=f[2];
                if(dist[begin]!=INT_MAX&&dist[begin]+cost<temp[end]){
                    temp[end]=dist[begin]+cost;
                }
            }
            dist=temp;
        }
        return dist[dst]==INT_MAX?-1:dist[dst];
    }
};
